// week9_quiz1.cpp
// 2021112037 문채영

#include <iostream>

using namespace std;

class Car{
private:
  string name; // 차량 이름
  int num; // 차량 번호
  int show; // 표시
public:
  static int cnt; // 차 수량 static으로
  //생성자
  Car(){
    cnt++; // 생성자 호출시 차 수량 올리기
  }

  // 차량 번호 Set
  void SetNum(){
    cout<<"차량 번호 입력 : ";
    cin>>num;
  }
    
  // 치량 이름 Set
  void SetName(){
    cout<<"차량 이름 입력 : ";
    cin>>name;
  }
    
  // 표시 Set
  void SetShow(){
    cout<<"표시(1-10) : ";
    cin>>show;
  }
  
  // 전체 Set불러오는 Method
  void Setting(){
    SetNum();
    SetName();
    SetShow();
  }
    
  // 차량 전체 정보 불러오기
  void Input(){
    cout<<"차량 번호 : "<<num<<endl;
    cout<<"차량 이름 : "<<name<<endl;
    cout<<"표시(1-10) : "<<show<<endl<<endl;
  }
};

int Car::cnt = 0;

int main(void)
{
  Car a = Car(); // 객체 a 생성
  a.Setting(); // a 셋팅 진행
  
  cout<<endl;
  a.Input(); // a 정보 불러오기
  
  Car b = Car(); // 객체 b 생성
  b.Setting(); // b 셋팅 진행
  
  cout<<endl;
  b.Input(); // b 정보 불러오기
  
  // static변수 cnt, Car클래스로 직접 가져오기
  cout<<"클래스에서 생성된 객체 수 : "<<Car::cnt<<endl;
  return 0;
}

