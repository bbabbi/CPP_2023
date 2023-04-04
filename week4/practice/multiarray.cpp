#include <iostream>
using namespace std;

class Student {
private :
  int num;
public :
  Student() { num = 123456; }
  Student(int n) { num = n; }
  void setNum(int n) { num = n; }
  int getNum() {return num; }
};

int main() {
  Student aClass[2][4] = { Student(111), Student(222), Student(333), Student(444)};

  aClass[1][0].setNum(55);
  aClass[1][1].setNum(66);
  aClass[1][2].setNum(77);
  aClass[1][3].setNum(88);

  for(int i=0; i < 2; i++){
    for(int j=0; j < 4; j++){
      cout << aClass[i][j].getNum() << endl;
    }
  }
}