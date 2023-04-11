// CH3_EX1.cpp
// Circle 클래스의 객체 생성 및 활용

#include <iostream>
using namespace std;

class Circle{ // Circle 선언부
public : 
  int radius;
  double getArea();
  /* 클래스 선언과 구현을 분리하는 이유
    -> 클래스의 재사용을 위해서
    -> 클래스를 사용하고자 하는 다른 C++ 파일에서는 컴파일 시 클래스의 선언부만 필요.
  */

};

//Circle 구현부 - getArea 메소드
double Circle :: getArea(){
  return 3.14 * radius * radius;
}

int main(){
  Circle donut;
  donut.radius = 1; // donut 객체의 반지름을 1로 설정
  double area = donut.getArea(); // donut 객체의 면적 알아내기
  cout << "donut 면적은 " << area << endl;

  Circle pizza;
  pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
  area = pizza.getArea();
  cout << "pizza의 면적은 " << area << endl;
}