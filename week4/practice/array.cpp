/* 객체 배열 생성 및 소멸 예제 */

#include <iostream>
using namespace std;

// 객체 포인터를 사용하지 않은 예제

class TestResult {
private: 
  int myScore;
  int myNumber;
  string myName;
public :
  TestResult() {
    myScore = 0;
    myNumber = 0;
    myName = "none";
  }
  void setInfo(int score, int number, string name);
  void printAll(); // 와 여기 오타낸 거 한참 찾음 ㅜㅜ
};

void TestResult::setInfo (int score, int number, string name) {
  myScore = score;
  myNumber = number;
  myName = name;
}

void TestResult::printAll() {
  cout << myNumber <<endl;
  cout << myName << endl;
  cout << myScore << endl;
}

int main() {
  TestResult student[3];
  int num, score;
  string name;

  for(int i=0; i<3; i++){
    cout << "학번 : ";
    cin >> num;
    cout << "이름 : ";
    cin >> name;
    cout << "점수 : ";
    cin >> score;
    student[i].setInfo(score, num, name);
  }

  student[0].printAll();
  student[1].printAll();
  student[2].printAll();
  return 0;
}