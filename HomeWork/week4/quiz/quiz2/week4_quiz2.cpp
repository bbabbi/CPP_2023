#include "BackClient.h"

int main() {
  int option = 0;
  int cash = 0;

  //객체 생성
  BankClient ban_cl1("Alice", 2023123456, 100000);
  BankClient ban_cl2("Alice", 2023123456, 132165);
  BankClient ban_cl3("Alice", 2023123456, 119809);

  // 출력
  ban_cl1.getBankClient();
  ban_cl2.getBankClient();
  ban_cl3.getBankClient();

  //입금, 출금 함수 사용하기
  //입금
  cout << "입금할 금액을 입력해주세요 : ";
  cin >> cash;

  ban_cl1.cashin(cash);

  //출금
  cout << "출금할 금액을 입력해주세요 : ";
  cin >> cash;
  ban_cl1.cashout(cash);
}