// week10_quiz1.cpp

#include <iostream>
using namespace std;

// Number 클래스
class Number{
private:
  int sttpoint = 0;
  int endpoint = 1000;
  int total = 0; // 총합
  friend class Cal; // friend 클래스인 Cal 선언
};

// Cal 클래스 (계산용)
class Cal{
public:
  /* calNum method에서 Number의 private 변수를 사용해야함.
    -> freind Number 참조해서 가져오기 */
  void calculator(Number& N){
    for(int i = N.sttpoint; i < N.endpoint; i++)
    {
      // 9로 나누어 떨어지는 숫자 구하기
      if(i % 9 == 0){
        cout<<"9로 나누어진 숫자는 "<<i<<endl;
        // 총합인 total에 저장하기
        N.total = N.total + i;
      }
    }
    cout<<"9로 나눌 수 있는 모든 수의 합은 "<<N.total<<endl;
  }
};

int main(void)
{
  // Cal클래스 c 인스턴스 생성
  Cal c;
  // Number 클래스 n 인스턴스 생성
  Number n;
  // c Method calculator 불러오기
  c.calculator(n);

  return 0;
}
