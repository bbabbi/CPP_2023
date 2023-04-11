//CH3_EX2.cpp

#include <iostream>
using namespace std;

class Circle{
public :
  int radius;
  Circle(); // 기본 생성자
  Circle(int r); // 매개 변수 있는 생성자
  double getArea();
};

Circle :: Circle(){
  radius = 1; //반지름 값 초기화
  cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle :: Circle(int r){
  radius = r;
  cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle :: getArea(){
  return 3.14*radius*radius;
}

int main() {
  Circle donut;//매개변수 없는 생성자 호출 - 아하, 여기서 Circle();이 호출되는 거임!!!!
  double area = donut.getArea();
  cout << "donut 면적은 " << area << endl;

  Circle pizza(30);//매개변수 있는 생성자 호출. 30이 r에 전달됨!!
  area = pizza.getArea();
  cout << "pizza의 면적은 " << area << endl;
}