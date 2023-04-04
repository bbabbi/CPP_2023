#include <iostream>
#include <string>
using namespace std;

//Lecture 클래스
class Lecture {
private :
  string name;
  int num;
  string attendance;
public :
  Lecture(){}
  Lecture(string stu_name, int stu_num, string stu_attendance)
    : name(stu_name), num(stu_num), attendance(stu_attendance){cout << name << " 출석체크를 시작합니다." <<endl;}

  void show(){
    cout << "이름 : " << name << endl;
    cout << "학번 : " << num << endl;
    cout << "출결(출석, 지각, 결석) : " << attendance << endl;
  }
  ~Lecture(){}
};

int main() {
  int n = 3;
  Lecture* students = new Lecture[n];

  students[0] = Lecture("김혜성", 2021112037, "출석");
  students[1] = Lecture("이정후", 2022112022, "결석");
  students[2] = Lecture("변준형", 2015113033, "지각");

  cout << "----------------" << endl;

  students[0].show();
  students[1].show();
  students[2].show();

  cout << "----------------" << endl;

  return 0;
}