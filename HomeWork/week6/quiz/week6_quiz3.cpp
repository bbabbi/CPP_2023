// week6_quiz3.cpp
// 2021112037 문채영

#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
  int i = 0;
  // 문자열 a[]의 끝까지(\0) 검사한 후,
  // 문자(c)를 찾으면 a[i]를 반환
  while (a[i] != '\0') {
    if (a[i] == c) {
      success = true;
      return a[i];
    }
    i++;
  }
  // 문자(c)를 못 찾은 경우,
  // 마지막 공간(마지막 i값에 대한 a[i])의 참조 반환
  success = false;  
  return a[i];
}

int main() {
  char b[] = "DonggukUniv";
  bool suc;

  cout << "Before : " << b << endl;
  
  // 'D'찾기
  char& f_ch = find(b, 'D', suc);
  
  if (suc) {
    //만약 found_char가 대문자라면 소문자로 변경, 아니라면 변경 x
    f_ch = (f_ch >= 'A' && f_ch <= 'Z') ? f_ch - 'A' + 'a' : f_ch;
    cout << "After : " << b << endl;
  }
  else {
    cout << "After : " << b << endl;
  }
  
  return 0;
}