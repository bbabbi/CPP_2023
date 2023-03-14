/*
2021112037 문채영
week1_quiz2.c
심화프로그래밍 1주차 실습과제 5번
*/

#include <iostream>
using namespace std;

class Fibonacci {
// 클래스에는 메소드를 선언만 하고,
public:
  int fib(int n);
};

// 클래스 밖에서 메소드 fib를 정의함.
// fib 함수에 대한 주석은 quiz4와 동일하여 생략.
int Fibonacci :: fib(int n){
    if(n <= 0){
    return 0;
  }
  else if( n == 1 ){
    return 1;
  }
  else{
    return fib(n-2) + fib(n-1);
  }
}

int main(){

  int num;
  // prinf를 cout으로, scanf를 cin으로 수정
  cout << "원하는 숫자 n을 입력하세요 : ";
  cin >> num;

  Fibonacci result;
  // 메소드 fib 호출
  int a = result.fib(num);

  cout << a << endl;

}
