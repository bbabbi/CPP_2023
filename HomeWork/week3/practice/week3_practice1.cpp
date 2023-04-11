#include <iostream>
using namespace std;

class Student {
private :
  char* name;
  int age = 0;
  int id = 1010156;
public :
  void show() {
    cout << "이름 : " << name << endl;
    cout << "나이 : " << age << endl;
    cout << "아이디 : " << id << endl;
  }
};

int main(){
  Student stn;
  Student::name;
  cout << "학생의 이름 : ";
  cin >> stn.name;
  cout << "학생의 나이 : ";
  cin >> stn.age;
  stn.show();
  return 0;
}