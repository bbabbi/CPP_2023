#include <iostream>
using namespace std;

int main(){
  cout << "주소를 입력하세요 >> ";
  char address[100];
  cin.getline(address, 100, '\n'); // 키보드로부터 주소 읽기

  cout << "주소는 " << address << "입니다\n"; //주소 출력
}

// 이 코드에서는 getline을 사용했기 때문에
// 빈칸이 있어도 엔터 키가 입력 될 때까지 하나의 문자열로 인식