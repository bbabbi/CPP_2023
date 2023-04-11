// 객체 포인터 예제
#include <iostream>
using namespace std;

class Student{
private:
  int num;
public :
  Student() { num = 1; }
  Student(int n) { num = n; }
  int getNum() { return num; }
};

int main() {
  // 객체 이름으로 접근하기
  Student aClass(30);
  cout << aClass.getNum() << endl;

  // 객체 포인터로 접근하기
  Student *s;
  s = &aClass;
  cout << s -> getNum() << endl; //ex1
  cout << (*s).getNum() << endl; // ex2

  return 0;
}