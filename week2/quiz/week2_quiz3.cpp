/*
2021112037 문채영
week2_quiz3.cpp - 심화프로그래밍 2주차 실습과제 3번
*/

#include <iostream>
using namespace std;

class Calculator {
public:
  int num1, num2; // 연산에 사용되는 숫자
  char op; // 연산자
};

int main(){

  Calculator calc;

  for(int i = 0; i < 5; i++){
    // 입력을 가시적으로 구분하기 위해 ^를 출력한다.
    cout << "^ ";
    // cin을 통해 연산식 num1, op, num2를 입력받는다.
    cin >> calc.num1 >> calc.op >> calc.num2;

    cout << calc.num1 << " " << calc.op << " "<< calc.num2 << " = ";

    //switch문을 통해 각 연산자에 따라 출력되는 연산 결과를 처리한다.
    switch(calc.op){
    case '+': // 덧셈
      cout << calc.num1 + calc.num2 << endl;
      break;
    case '-': // 뺄셈
      cout << calc.num1 - calc.num2 << endl;
      break;
    case '*': // 곱셈
      cout << calc.num1 * calc.num2 << endl;
      break;
    case '/': // 나눗셈
      cout << calc.num1 / calc.num2 << endl;
      break;
    case '%': // 나머지연산
      cout << calc.num1 % calc.num2 << endl;
      break;
    }
  }
}