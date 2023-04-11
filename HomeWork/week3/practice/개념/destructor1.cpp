/* 소멸자 (Destructor) */

/* 
  소멸자(destructor)는 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수를 말한다.
  객체가 지역 범위를 벗어나거나 동적으로 할당된 객체가 삭제 키워드를 통해 소멸될 때 실행된다.
  생성자는 클래스의 초기화를 돕는다면, 소멸자는 일종의 '청소'를 돕도록 설계된 도구이다.

  [소멸자 규칙]
  * 소멸자 이름은 '클래스'이름과 같아야 하며 ~를 함께 달아야한다.
  * 소멸자는 인수와 반환값이 없다.(생성자와 달리 매개변수를 가질 수 없다.)
  -> 이러한 규칙 때문에 소멸자는 "클래스 당 하나"만 존재
  -> 소멸자를 명시적으로 호출하는 경우는 코드를 재사용할 때 외에는 없다. (대상 클래스가 무엇을 담고 있는지 꼭 확인한 후 사용할 것.)
*/

/* 소멸자 예제 1*/

#include <iostream>
using namespace std;

class Person{
  string name;
  int age;
public:
  Person() {name = "동국"; age = 20;}
  Person(string n) { name = n; age = 24;}
  Person(string n, int a) { name = n; age = a; }
  string getName() { return name; }
  int getAge(){ return age; }
  ~Person() { cout << name << "님의 기록이 삭제되었습니다." << endl; }
};

int main(){
  Person ps;
  Person pt("유리");
  Person pa("철수", 22);
  cout << "이름 : " << ps.getName() << ", 나이 : " << ps.getAge() << endl;
  cout << "이름 : " << ps.getName() << ", 나이 : " << pa.getAge() << endl;
  cout << "이름 : " << pt.getName() << ", 나이 : " << pt.getAge() << endl;
}