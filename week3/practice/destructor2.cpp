/* 소멸자 예제 2 - 소멸자를 사용한 동적할당 예제*/

#include <iostream>
using namespace std;

class Student {
public :
  Student(void); //생성자
  ~Student(void); // 소멸자
};

Student :: Student(void){
  cout << "학생 객체 생성자" << endl;
}

Student :: ~ Student(void){
  cout << "학생 객체 소멸자" << endl;
}

int main(void){
  Student stu1;
  cout << "Test1" << endl;

  Student* stu2 = new Student(); // 동적으로 객체 생성
  cout << "Test2" << endl;

  delete stu2; // 동적으로 생성한 객체 소멸
  cout << "Test3" << endl;
  return 0;
}