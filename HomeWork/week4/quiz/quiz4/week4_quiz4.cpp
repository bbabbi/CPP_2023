// week4_quiz4.cpp

#include "Lecture.h"

int main(){
  Lecture stu_a("김혜성", 2022654321, "출석");
  Lecture stu_b("이정후", 2022987656, "결석");
  Lecture stu_c("변준형", 2015113024, "지각");

  cout << "--------------" << endl;

  stu_a.show();
  stu_b.show();
  stu_c.show();

  cout << "--------------" << endl;

  return 0;
}