// BankAccount 객체 리ㄴ

#include <iostream>
using namespace std;

class BankAccount {
  int Balance;
public :
  BankAccount() {Balance = 10000;}
  BankAccount(int Balance){this -> Balance = Balance;}
  void setBalance(int Balance){this -> Balance = Balance;}
  double getArea() {return Balance;}
};

BankAccount getBankAccount(){
  BankAccount tmp(50000);
  return tmp; // 객체 tmp 리턴
}

int main(){
  BankAccount c; // 객체 생성, Balance = 10000
  cout << "Balance : " << c.getArea() << endl;

  c = getBankAccount();
  cout << "Balance : " << c.getArea() << endl;
}