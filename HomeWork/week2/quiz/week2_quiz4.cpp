/*
2021112037 문채영
week2_quiz4.cpp - 심화프로그래밍 2주차 실습과제 4번
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

  string str;

  //문자열 입력
  cout << "문자열을 입력하세요 : ";
  getline(cin, str);


  //문자열 출력
  cout << "반대로 출력 : ";
  for(int i = str.length(); i >= 0; i--){
    cout << str[i];
  }
  cout << endl;

  return 0;
}