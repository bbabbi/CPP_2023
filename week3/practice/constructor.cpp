/* 클래스와 구조체의 차이 */
/* 
  클래스와 구체 둘 다 연관 있는 데이터를 묶을 수 있는 문법적 장치
  -> 구조체의 경우, 모든 변수와 함수는 public으로 선언됨.
  -> 클래스의 경우, 접근지정자가 없으면 모든 변수와 함수는 private로 선언됨.
  => 즉, 구조체를 클래스로 변경하려면 단순히 strct를 지우고 class로 변경하면 되는 것이 아니라 접근지정자 private와 public을 사용하여 지정해주어야 한다.
*/

/* 생성자 */
/*
  생성자는 해당 클래스의 객체가 instance화 될 때 자동으로 호출되는 특수한 종류의 멤버함수이다.
  생성자는 일반적으로 클래스의 멤버 변수를 적절한 기본값 또는 사용자 제공 값으로 초기화하거나 클래스를 사용하는 데 필요한 설정이 필요한 경우 사용한다.

  [생성자의 정의 방법]
  * 생성자의 이름은 클래스와 이름이 같아야한다.
  * 생성자는 리턴 타입이 없다.
  
  [기본 생성자(Default constructor)]
  * 매개 변수를 갖지 않거나 모두 기본값이 설정된 매개 변수를 가지고 있는 생성자

  [매개 변수가 있는 생성자를 사용한 초기화]
  * 클래스 인스턴스별 멤버 변수의 값을 특정한 값으로 초기화할 때 사용
*/


/* 1. 기본 생성자를 사용한 예제 */
#include <iostream>
using namespace std;

class Fraction{
private :
  int m_numerator; // 분자
  int m_denominator; // 분모

public :
  Fraction() // 기본생성자
  {
    m_numerator = 0;
    m_denominator = 1;
  }
  int getNumerator() { return m_numerator; }
  int getDenominator() { return m_denominator; }
  double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};

int main()
{
  Fraction frac;
  cout << frac.getNumerator() << "/" << frac.getDenominator() << '\n';
  return 0;
}