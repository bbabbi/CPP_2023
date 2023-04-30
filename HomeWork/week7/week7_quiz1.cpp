// week7_quiz1.cpp
// 2021112037 문채영

#include <iostream>
#include <string>
using namespace std;

//조건 1 : Factory 클래스
class Factory {
private : 
  char *name; // name을 배열로 만들어서 동적할당에 활용
public :
  Factory(const char* name);
  Factory(const Factory& f);
  ~Factory();
};

//생성자
Factory::Factory(const char* name){
  int length = (unsigned int)strlen(name); //length = name의 길이
  this -> name = new char[length+1]; // name 공간할당, null까지 생각해야함
  strcpy(this -> name, name); // strcpy를 활용해서 문자열을 복사 => name에 저장
  cout << "메모리 할당" << endl;
}

//복사생성자
Factory :: Factory(const Factory& f){
  int length = (unsigned int)strlen(f.name);
  this -> name = new char[length+1];
  strcpy(this -> name, f.name); // this -> name에 f.name 문자열을 복사한다.
  cout << this -> name << " 1대 생산" << endl;
}

//소멸자
Factory :: ~Factory(){
  cout << "메모리 소멸" << endl;

  //name이 동적할당 되어있다면
  if(name){
    delete []name; //할당해제 진행
  }
}

int main(void){
  Factory myfactory = Factory("SAMSUNG");
  Factory mymyfactory(myfactory);

  return 0;
}
