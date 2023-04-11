// week5_quiz2.cpp

#include <iostream>
#include <string>
using namespace std;

// 대문자를 소문자로, 소문자를 대문자로 바꿔주는 Change 메소드
string Change(string origin){
  string result = origin;

  for(int i = 0; i < origin.length(); i++){
    // 아스키 코드값 활용 - 대문자에 해당하면 소문자로 변환
    if('A' <= origin[i] && origin[i] <= 'Z'){
      result[i] = tolower(origin[i]);
    }
    // 아스키 코드값 활용 - 소문자에 해당하면 대문자로 변환
    else if(origin[i] >= 'a' && origin[i] <= 'z'){
      result[i] = toupper(origin[i]);
    }
  }
  return result;
}

int main(){
  for(int i = 0; i < 3; i++){
    string origin;
    
    cout << "원본 문자열 : ";
    cin >> origin;
    cout << "대소문자 변경 -> " << Change(origin) << endl;
  }

  return 0;
}