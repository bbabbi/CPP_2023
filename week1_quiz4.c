#include <stdio.h>

//피보나치 수열 함수 - 재귀
int fib(int n){
  if(n <= 0){
    return 0;
  }
  else if (n == 1) {
    return 1;
  }
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