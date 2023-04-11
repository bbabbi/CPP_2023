/*
2021112037 문채영
week1_quiz2.c
심화프로그래밍 1주차 실습과제 2번
*/

#include <stdio.h>

int main(void) {
  int temp = 0;
  int i = 0, j = 0;
  int nums[10];

  // nums배열의 데이터 입력받기
  printf("배열의 원소를 입력하세요. : ");
  while(i < 10){
    scanf("%d", &nums[i]);
    i++;
  }

  i = 0;

  // nums 배열의 데이터 출력
  printf("데이터 출력: ");
  while(i < 10){
    printf("%d ", nums[i]);
    i++;
  }
  printf("\n");

  i = 0;

  // nums 배열의 원소들 오름차순 정렬
  while ( i < 10 ){
    while( j < 10 ){
      /*
      오름차순 정렬의 핵심이 되는 부분.
      조건문을 통해 nums 배열의 원소들의 크기를 비교하여
      temp 변수를 활용하여 값을 교환한다.
      */
      if(nums[i] < nums[j]){
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
      j++;
    }
    i++;
    j=0; // 변수는 다 쓰고나면 다시 반복할 과정을 위해 초기화해줘야 함.
  }

  i = 0;

  // 오름차순 정렬된 nums 배열의 원소들을 출력
  printf("오름차순 정렬: ");
  while (i < 10){
    printf("%d ", nums[i]);
    i++;
  }
}