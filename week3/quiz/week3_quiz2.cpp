/*
  2021112037 문채영
  심화프로그래밍 실습3 과제2 week3_quiz2.cpp
*/

#include <iostream>
using namespace std;

#define HOWMANY 60 // 치킨 개수 고정 - 60마리
#define PRICE 20000 // 치킨 가격 고정 - 2만원

class chickenBuyer{
private:
  int buying; // 구매자가 사려는 치킨 수
  int money; // 구매자가 가지고 있는 돈
  int pay; // 구매자가 내야할 금액
  // int remain = HOWMANY - buying; // 구매하고 남은 치킨의 수
public:
  void print(int buying, int money){
    pay = PRICE * buying;

    if(money >= pay){
      cout << "치킨판매자 현황" << endl;
      cout << "남은 치킨 : " << (HOWMANY - buying) << endl;
      cout << "판매 수익 : " << PRICE * buying << endl;

      cout << endl;
      cout << "치킨구매자 현황" << endl;
      cout << "현재 잔액 : " << money - (PRICE * buying)<< endl;
      cout << "치킨 개수 : " << buying << endl;
    }
    else{
      cout << "잔액 부족으로, 구매하실 수 없습니다." <<endl;
      cout << "금액대에 맞는 수의 치킨을 주문해주세요." <<endl;
    }
  }
};

int main(){
  int num;
  int mon;
  chickenBuyer chicken;

  cout << "구매하려는 보유한 금액과 치킨의 마리 수를 차례로 입력하세요 : ";
  cin >> mon >> num;
  cout << endl;

  chicken.print(num, mon);
}