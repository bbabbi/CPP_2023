//week5_quiz1.cpp

#include <iostream>
#include <string>
using namespace std;

void print(string userinput){
  //원본 그대로 출력
  cout << "원본 문자열 : ";
  for(int i = 0; i < userinput.length(); i++){
    cout << userinput[i];
  }
  cout << endl;

  //역순으로 출력
  cout << "역순 문자열 : ";
  for(int i = userinput.length(); i >= 0; i--){
    cout << userinput[i];
  }
  cout << endl;
}

int main(){
  string input;
  getline(cin, input);

  print(input);

  return 0;
}