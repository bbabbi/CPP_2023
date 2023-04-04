/* 매개 변수가 있는 생성자를 사용한 예제*/

#include <iostream>
using namespace std;

class Date {
public :
  int year;
  int month;
  int day;

  Date (int year, int month, int day) {// 매개변수가 있는 생성자
    this -> year = year;
    this -> month = month;
    this -> day = day;
    cout << "[Constructor] Date() - param: year, month, day\n";
  };

  void ShowData(){
    cout << "Year: " << year << endl;
    cout << "month: " << month << "\n";
    cout << "day: " << day << "\n";
  }
};

int main(){
  Date date(2022, 9, 21);
  date.ShowData();
  return 0;
}