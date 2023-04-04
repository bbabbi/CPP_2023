// BankClient.h
// 조건 - 헤더파일 분리

#include <iostream>
#include <string>
using namespace std;

class BankClient {
private :
  // 조건 - 접근지정자 분리
  string name;
  int accountNumber;
  int remain;
public :
  //생성자
  BankClient(string n, int account, int remn)
    : name(n), accountNumber(account), remain(remn){}
  void getBankClient() {
    cout << "예금주 : " << name << endl;
    cout << "계좌번호 : " << accountNumber << endl;
    cout << "잔액 : " << remain << endl;
    cout << endl;
  }

  // 문제에서 예금, 출금에 대한 멤버함수를 구현하라고 하긴 했는데, 테스트에는 없음.
  //예금 멤버함수
  void cashin(int cash){
    //들어온 cash만큼 잔액(remain)에 가산
    remain += cash;
    cout << "입금이 완료되었습니다. 현재 잔액은 " << remain << "입니다." << endl;
  }

  // 출금 멤버함수
  void cashout(int cash){
    if(cash > remain) {
      cout << "계좌 내의 잔액이 부족합니다. 현재 잔액은 " << remain << "입니다." << endl;
    }
    else {
      //빠져나간 cash만큼 잔액(remain)에서 감산
      remain -= cash;
      cout << "출금이 완료되었습니다. 현재 잔액은 " << remain << "입니다." << endl;
    }
  }

  // 소멸자
  ~BankClient() {}
};