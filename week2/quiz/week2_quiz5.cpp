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

  // 삼각형 출력을 위해, 문자열의 길이만큼 반복,
  for(int i = 0; i < str.length(); i++){
    // 각 행의 수와 동일한 수의 배열의 원소까지 출력
    for(int j = 0; j <= i; j++){
      cout << str[j];
    }
    cout << endl;
  }
}