/*
2021112037 문채영
week2_quiz1.cpp
심화프로그래밍 2주차 실습과제 1번
*/

#include <iostream>
using namespace std;

//클래스 활용해야함. 나머지 조건은 만족함 OK

int main(){
  char str[100];
  int cnt_small = 0, cnt_big = 0, cnt_num = 0;

  cout << "문자열 입력 : ";
  cin.getline(str, 100, '\n');

  for (int i = 0; i < strlen(str); i++){
    //1. 소문자인지 판단 - 아스키코드값이 a와 z 사이인지 판단
    if(str[i] >= 'a' && str[i] <= 'z') {
      cnt_small++;
    }
    // 2. 대문자인지 판단 - 아스키코드값이 A와 Z 사이인지 판단
    else if (str[i] >= 'A' && str[i] <= 'Z'){ // 대문자인지 판단
      cnt_big++;
    }
    //3. 숫자인지 판단 - 아스키코드값이 0과 9 사이인지 판단
    else if(str[i] >= '0' && str[i] <= '9'){
      cnt_num++;
    }
    // 공백은 그냥 str[i]가 ' '인지 비교하여 판단할 수 있지만,
    // 문제에서 요구하지 않은 조건이므로 생략한다.
  }

  cout << "알파벳 소문자의 갯수 : " << cnt_small << endl;
  cout << "알파벳 대문자의 갯수 : " << cnt_big << endl;
  cout << "숫자의 갯수 : " << cnt_num << endl;
  cout << "문자열의 길이 : " << strlen(str) << endl;
}