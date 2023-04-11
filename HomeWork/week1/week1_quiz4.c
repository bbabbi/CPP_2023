/*
2021112037 문채영
week1_quiz2.c
심화프로그래밍 1주차 실습과제 4번
*/

#include <stdio.h>

//피보나치 수열 함수 - 재귀
int fib(int n){
  // fib ( 0 ) 일 때는 0을 반환한다.
  if(n <= 0){
    return 0;
  }
  // fib ( 1 ) 일 때는 1을 반환한다.
  else if (n == 1) {
    return 1;
  }
  // fib(0)과 fib(1)을 제외한 경우에는
  // fib(n) = fib(n-2) + fib(n-1) 계산을 통해 fib(n)을 반환한다.
  else{
    return fib(n - 2) + fib(n - 1);
  }
}

int main(){
  int n;
  printf("원하는 숫자 n을 입력하세요 : ");
  scanf("%d", &n);
  printf("피보나치 수열 f(%d)의 마지막 값은 %d입니다.", n, fib(n));
}