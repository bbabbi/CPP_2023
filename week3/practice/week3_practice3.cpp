#include <iostream>
using namespace std;

// 생성자를 활용해서 바꿔보기!!!

class Computer{
public :
  string name;
  int RAM;
  string cpu_type;
  double cpu_speed;

  void print();
};

void Computer :: print(){
  cout << "이름 : " << name << endl;
  cout << "RAM : " << RAM << "GB" << endl;
  cout << "CPU 종류 : " << cpu_type << endl;
  cout << "CPU 속도 : " << cpu_speed << "GHz" << endl;
}

int main(){
  Computer comp;

  comp.name = "김동국 노트북";
  comp.RAM = 16;
  comp.cpu_type = "인텔 코어 i7-12세대";
  comp.cpu_speed = 2.1;

  comp.print();
}