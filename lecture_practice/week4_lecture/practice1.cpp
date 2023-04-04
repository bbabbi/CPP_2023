/* 예제 4-1 객체 포인터 선언 및 활용 */
// 이거 이해가 잘 안 되네
// 객체에 대한 포인터를 객체 포인터라고 하고, C언어의 포인터와 동일하며 객체의 주소 값을 가지는 변수이다.
// 포인터로 멤벌르 접근할 때 객체포인터 -> 멤버

#include <iostream>
using namespace std;

class Circle {
private : 
  int radius;
public : 
  Circle() { radius = 1; }
  Circle(int r) { radius = r; }
  double getArea();
};

double Circle::getArea(){
  return 3.14 * radius * radius;
}

int main() {
  Circle donut;
  Circle pizza(30);

  //객체 이름으로 멤버 접근
  cout << donut.getArea() << endl;

  //객체 포인터로 멤버 접근
  Circle *p; // 객체에 대한 포인터 선언
  p = &donut; // 포인터 변수에 객체 주소 저장
  cout << p -> getArea() << endl; // donut의 getArea() 호출
  cout << (*p).getArea() <<endl; // donut의 getArea()호출

  p = &pizza; // 포인터 변수에 객체 주소 저장
  cout << p->getArea() << endl; // pizza의 getArea() 호출
  cout << (*p).getArea()<<endl; // pizza의 getArea()호출

}