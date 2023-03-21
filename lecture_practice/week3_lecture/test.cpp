#include <iostream>
#include <string>
using namespace std;

class Car{
public :
  string brand;
  int speed;
  int gear;
  string color;

  int speedUp();
  int speedDown();
  // 여기 못 했었음.
  string colorTrans();
};

// :: 이거 빼먹어서 오류남.
int Car :: speedUp(){
  speed = speed + 15; // speed += 15;
  return speed;
}
int Car :: speedDown(){
  speed = speed - 15; //speed -= 15;
  return speed;
}

string Car :: colorTrans(){
  color = "Black";
  return color;
}

int main(){
  Car mycar;
  mycar.brand = "Hyndai";
  mycar.speed = 180;
  mycar.gear = 4;
  mycar.color = "Gray";

  cout << "현재 속도는 " << mycar.speed << ", 기어는 " << mycar.gear << ", 현재 자동차 색상은 " << mycar.color << endl;

  mycar.speedUp();
  cout << "속도 speedup() 호출" << mycar.speedUp() << endl;

  //mycar.speedDown();
  cout << "속도 speedDown() 호출 " << mycar.speedDown() << endl;

  mycar.colorTrans();
  cout << "자동차 색상 변경 colorTrans() 호출" << mycar.color << " 으로 변경" << endl;
}