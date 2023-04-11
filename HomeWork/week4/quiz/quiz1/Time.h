#include <iostream>
using namespace std;

class Time{
private : // 시간, 분, 초에 대한 멤버변수
  int hour;
  int minute;
  int second;

public : 
  void SetHour(int h); // 시간설정
  void SetMin(int m); // 분 설정
  void SetSec(int s); // 초 설정
  void GetTime(); // 시간 출력
  int ExchangeSec(); // 시간을 초로 변환
};


/*각각의 멤버함수*/

void Time :: SetHour(int h){hour = h;}
void Time :: SetMin(int m){minute = m;}
void Time :: SetSec(int s){second = s;}

// 시간 출력하기
void Time::GetTime() {
  string hourString;
  string minString;
  string secString;

  // 10이하인지 체크하여 표현방식 수정 - 삼항연산자 사용
  hourString = hour < 10 ? "0" + to_string(hour) : to_string(hour);
  minString = minute < 10 ? "0" + to_string(minute) : to_string(minute);
  secString = second < 10 ? "0" + to_string(second) : to_string(second);
  cout << "입력한 시간 = " << hourString << ":" << minString << ":" << secString << endl;
}

//입력받은 시간 초로 설정하기
int Time :: ExchangeSec() {
  int result = 0;

  //시 -> 3600, 분 -> 60, 초 -> 그대로
  result += hour * 3600;
  result += minute * 60;
  result += second;

  return result;
}