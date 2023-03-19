/*
2021112037 문채영
week2_quiz2.cpp - 심화프로그래밍 2주차 실습과제 2번
*/

#include <iostream>
#include <string>
using namespace std;

class Cal {
public :
  int num1, num2;
  int remain;

  // 유클리드 호제법에 대한 메소드 gcd
  int gcd(int num1, int num2){
    /* num2가 0이 될 때까지 진행해야하므로,
      0이 아닐 때 반복문을 실행하도록 조건을 설정한다.*/
    for( ; num2 != 0; ){
      remain = num1 % num2;
      num1 = num2;
      num2 = remain;
    }
    return num1;
  }
};

  int main(){
    Cal result;
    // 두 수를 입력받는다.
    cout << "두 수를 입력하세요 : ";
    cin >> result.num1 >> result.num2;

    // 입력받은 두 수에 대한 gcd메소드의 결과를 정수형 변수 ggccdd에 저장
    int ggccdd = result.gcd(result.num1, result.num2);

    cout << "두 수의 최대공약수 : " << ggccdd << endl;

    // 최소공배수는 두 수를 곱한 값을 두 수의 최대공약수로 나누어주면 된다.
    int lcm = (result.num1 * result.num2) / ggccdd;
    cout << "두 수의 최소공배수 : " << lcm << endl;
  }