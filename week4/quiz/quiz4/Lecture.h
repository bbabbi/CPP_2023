//Lecture.h

#include <iostream>
using namespace std;

class Lecture {
private :
  string name;
  int stu_num;
  string attendance;
public :
  //생성자
  Lecture(){}
  Lecture(string n, int num, string attend)
    : name(n), stu_num(num), attendance(attend) {cout << name << "출석체크를 시작합니다."<< endl;}

  // 상태를 출력해주는 show() 메소드
  void show(){
    cout << "이름 : " << name << endl;
    cout << "학번 : " << stu_num << endl;
    cout << "출결(출석, 지각, 결석) : ";
    cin >> attendance;
  }

  // 소멸자
  ~Lecture() { cout << name << "출석체크가 완료되었습니다." << endl; }

};