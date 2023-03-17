/*
2021112037 문채영
week2_quiz3.cpp - 심화프로그래밍 2주차 실습과제 3번
*/

#include <iostream>
using namespace std;

class Calculator {
public:
  int num1, num2;
  char op;
};

int main(){

  Calculator calc;

  for(int i = 0; i < 5; i++){
    cout << "^ ";
    cin >> calc.num1;
    cin >> calc.op;
    cin >> calc.num2;

    cout << calc.num1 << " " << calc.op << " "<< calc.num2 << " = ";

    switch(calc.op){
    case '+':
      cout << calc.num1 + calc.num2 << endl;
      break;
    case '-':
      cout << calc.num1 - calc.num2 << endl;
      break;
    case '*':
      cout << calc.num1 * calc.num2 << endl;
      break;
    case '/':
      cout << calc.num1 / calc.num2 << endl;
      break;
    case '%':
      cout << calc.num1 % calc.num2 << endl;
      break;
    }
  }
}