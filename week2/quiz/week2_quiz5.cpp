/*
2021112037 문채영
week2_quiz5.cpp - 심화프로그래밍 2주차 실습과제 5번
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

  string str;

  //문자열 입력
  cout << "문자열을 입력하세요 : ";
  getline(cin, str);

  for(int i = 0; i < str.length(); i++){
    for(int j = 0; j <= i; j++){
      cout << str[j];
    }
    cout << endl;
  }
}