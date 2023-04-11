#include <iostream>
using namespace std;

class Fraction {
private : 
  int m_numerator; // 분자
  int m_denominator; // 분모
public :
  Fraction() { //기본 생성자
    m_numerator = 0;
    m_denominator = 1;
  }
  int getNumerator() { return m_numerator; }
  int getDenominator() { return m_denominator; }
  double getValue() { return (m_numerator) / m_denominator; }
  
  ~Fraction(){cout << "데이터 삭제" << endl; }
};

int main() {
  Fraction frac;
  cout << frac.getNumerator() << "/" << frac.getDenominator() << endl;
  cout << frac.getValue() << endl;
  return 0;
}