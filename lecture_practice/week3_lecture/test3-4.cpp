// 예제 3-3을 수정하여 생성자에서 다른 생성자 호출 연습 (위임 생성자 만들기)
/* what is 위임 생성자?
  여러 생성자에 중복 작성된 코드의 간소화
  타겟 생성자와 이를 호출하는 위임 생성자로 나누어 작성
  * 타겟 생성자 : 객체 초기화를 전담하는 생성자
  * 위임 생성자 : 타겟 생성자를 호출하는 생성자, 객체 초기화를 타겟 생성자에 위임
*/

#include <iostream>
using namespace std;

class Circle{
public :
  int radius;
  Circle(); // 위임 생성자
  Circle(int r); // 타겟 생성자
  double getArea();
};

Circle :: Circle() : Circle(1) {} //위임 생성자

Circle :: Circle(int r){// 타겟 생성자
  radius = r;
  cout << "반지름" << radius << "원 생성" << endl;
}

double Circle :: getArea(){
  return 3.14 * radius * radius;
}