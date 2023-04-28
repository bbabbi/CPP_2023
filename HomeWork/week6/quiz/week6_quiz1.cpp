// week6_quiz1.cpp
// 2021112037 문채영

#include <iostream>
#include <time.h>

using namespace std;

class ReEntry {
private :
  int v;
public :
  //다른 항구 진입 전 - 기존 속도 / 3000
  void BeforeReentry(int v){
    cout<<"선박 속도(항구 진입 전) : "<<(float)v/3000<<"킬로미터(초)"<<endl;
  }
  //다른 항구 진입 후 - (기존 속도 - 10000) / 3000
  void AfterReentry(int v){
    cout<<"선박 속도(항구 진입 후) : "<<((float)v-10000)/3000<<"킬로미터(초)"<<endl;
  }
};

int main(void)
{
  ReEntry enter;
  int velocity = 17000; // 속도
  enter.BeforeReentry(velocity); // 진입전
  enter.AfterReentry(velocity); // 진입후
  return 0;
}