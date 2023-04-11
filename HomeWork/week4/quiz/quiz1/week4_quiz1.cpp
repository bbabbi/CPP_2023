#include "Time.h"

int main(){
  int hour, min, sec;

  //객체 생성
  Time time1;

  // 시간 입력받기
  cout << "시간을 입력해주세요 : " << endl;

  cout << "몇 시? ";
  cin >> hour;
  time1.SetHour(hour);

  cout << "몇 분? ";
  cin >> min;
  time1.SetMin(min);

  cout << "몇 초? ";
  cin >> sec;
  time1.SetSec(sec);

  //시간 출력
  time1.GetTime();

  //시간 -> 초 변환
  cout << "입력받은 시간을 초로 변환한 결과는 " << time1.ExchangeSec() << endl;
}