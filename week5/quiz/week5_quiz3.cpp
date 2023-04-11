//week5_quiz3.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
  for(int j=0; j<3; j++){
    string userinput;
    cout << "Original string: ";
    getline(cin, userinput);

      // 단어가 나오려면 공백이 있어야 한다는 점을 이용
      int cnt = 0;
      for (int i = 0; i < userinput.length(); i++) {
        // 단어가 시작될 때마다 개수 증가
        // 단, 맨 처음 단어는 공백이 아닌 경우에 단어가 존재할 것이므로 그 점을 이용한다.
        if(i == 0 && userinput[i] != ' '){
          cnt ++;
        }
        // 공백 다음에 공백이 아닌, 즉 문자가 등장하면 카운트
        else if(userinput[i-1] == ' ' && userinput[i] != ' '){
          cnt ++;
        }
      }

    cout << "단어 개수 : " << cnt << endl;
  }
  
  return 0;
}