// CH3_EX4.cpp
// 생성자에서 다른 생성자 호출 연습(위임 생성자 만들기 연습)

#include <iostream>
using namespace std;

class Circle{
public :
  int radius;
  Circle(); // 위임 생성자 ?? 기본 생성자랑 뭐가 다른 거지
  Circle(int r); // 타겟 생성자
  double getArea();
};

// 위임 생성자
Circle :: Circle() : Circle(1){ }

// 타겟 생성자 - 객체 초기화를 전담
Circle :: Circle(int r){
  radius = r;
  cout << "반지름 " << radius << "인 원 생성" << endl;
}

double Circle :: getArea(){
  return 3.14 * radius * radius;
}

int main() {
  Circle donut; // 매개변수 없는 생성자 호출
  double area = donut.getArea();
  cout << "donut 면적은 " << area << endl;

  Circle pizza(30); // 매개변수 있는 생성자 호출
  area = pizza.getArea();
  cout << "pizza 면적은 " << area << endl;
}