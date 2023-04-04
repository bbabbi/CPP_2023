/* 예제 4-3 객체 배열 초기화 */
// 배열의 각 원소 객체당 생성자를 지정하는 방법

#include <iostream>
using namespace std;

class Circle {
private :
  int radius;
public : 
  Circle() { radius = 1; }
  Circle(int r) { radius = r; }
  void setRadius(int r) { radius = r; }
  double getArea();
};

double Circle :: getArea() {
  return 3.14 * radius * radius;
}

int main() {
  // circleArray[0] 객체가 생성될 때, 생성자 Circle(10)
  // circleArray[1] 객체가 생성될 때, 생성자 Circle(20)
  // circleArray[2] 객체가 생성될 때, 생성자 Circle()
  // 이 호출된다.
  Circle circleArray[3] = {Circle(10), Circle(20), Circle()}; // Circle 배열 초기화

  for (int i = 0; i < 3; i++){
    cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
  }
}