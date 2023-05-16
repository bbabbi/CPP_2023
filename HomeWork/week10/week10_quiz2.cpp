// week10_quiz2.cpp

#include <iostream>

using namespace std;

class Num{
  int input_num; // 사용자가 입력한 글자수
  friend class Pyramid;
};

class Pyramid{
public:
  // 사용자로부터 숫자 입력받는 메소드
  void inputNum(Num& n){
    cout<<"글자수를 입력하세요(26이하의 숫자) : ";
    cin>>n.input_num;
    }
    
  // 피라미드 출력 메소드
  void printPyramid(Num& n){
      // 1 ~ 입력받은 수 만큼 반복
      for (int i = 1; i <= n.input_num; i++) {

        // j <= 입력받은 수 - i 일때까지 공백 출력(space x 2)
        for (int j = 1; j <= n.input_num - i; j++) {
          cout<<"  ";
        }

        // 알파벳 출력(단, 홀수개씩 1-3-5-.. 형태의 피라미드가 될 수 있게)
        for (int j = 1; j <= i * 2 - 1; j++) {
          char ch;
          // 현재 출력할 위치가 중앙에서 벗어났다면(중앙을 기준으로 오른쪽),
          if (j - i > 0) {
            ch = 65 + i - 1 - (j - i);
          } else { // 현재 출력할 위치가 중앙에서 왼쪽일 때,
            ch = 65 + i - 1 - (-1 * (j - i));
          }
          cout << ch << " ";
        }
        cout<<endl;
      }
    }
};

int main(void)
{
  Num n;
  Pyramid p;

  p.inputNum(n); // 숫자 입력받기
  p.printPyramid(n); // 피라미드 출력

  return 0;
}