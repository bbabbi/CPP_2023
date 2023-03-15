#include <iostream>
using namespace std;

int main() {
  cout << "이름을 입력하세요>>";

  char name[11]; // 한글은 5개 글자, 영문은 10까지 저장할 수 있다.
  //cin >> name; // 키보드로부터 문자열을 읽는다.
  cin.getline(name, 11, '\n'); // 공백이 낀 문자열을 입력받는방법

  cout << "이름은 " << name << "입니다.\n"; // 이름을 출력한다.
}