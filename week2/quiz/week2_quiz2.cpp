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
    
    // while(num2 != 0){
    //   remain = num1 % num2;
    //   num1 = num2;
    //   num2 = remain;

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
    cout << "두 수를 입력하세요 : ";
    cin >> result.num1 >> result.num2;

    int ggccdd = result.gcd(result.num1, result.num2);

    cout << "두 수의 최대공약수 : " << ggccdd << endl;

    int lcm = (result.num1 * result.num2) / ggccdd;
    cout << "두 수의 최소공배수 : " << lcm << endl;
  }
  //