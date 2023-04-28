#include <iostream>
#include <cstdlib>
using namespace std;

class Number {
private:
    int num;
public:
    void setNum(int n) {
        num = n;
    }
    //문제조건 : reverseDig 멤버함수
    // 숫자 뒤집기
    void reverseDig() {
        int temp = 0;
        int n = num;
        while (n > 0) {
            temp = temp * 10 + n % 10;
            n /= 10;
        }
        num = temp;
    }
    int getNum() {
        return num;
    }
};

// Number값 교환
void swapNum(Number& num1, Number& num2) {
    int temp = num1.getNum();
    num1.setNum(num2.getNum());
    num2.setNum(temp);
}

int main() {
    Number min, chul;
    int min_Num, chul_Num;

    // 난수 생성
    srand(time(NULL));
    min_Num = rand() % 1000;
    chul_Num = rand() % 1000;

    min.setNum(min_Num);
    chul.setNum(chul_Num);

    swapNum(min, chul);

    min.reverseDig();
    chul.reverseDig();

    int min_Rev = min.getNum();
    int chul_Rev = chul.getNum();

    // 맨 처음이 0이면 0을 제거하기
    if (min_Rev % 10 == 0) {
        min_Rev /= 10;
    }
    if (chul_Rev % 10 == 0) {
        chul_Rev /= 10;
    }

    cout << "민수의 숫자: " << min_Rev << endl;
    cout << "철수의 숫자: " << chul_Rev << endl;

    return 0;
}
