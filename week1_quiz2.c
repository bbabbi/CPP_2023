#include <stdio.h>

int main(void) {
  int temp = 0;
  int i = 0, j = 0;
  int nums[10];

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
    j = 0; // 이거 빼먹어서 오래걸렸다
  }
  printf("\n");

  i = 0;

  while ( i < 10 ){
    while( j < 10 ){
      if(nums[i] < nums[j]){
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
      j++;
    }
    i++;
    j=0; // 진짜 이것 떄문에 시간낭비 너무해서 나 자신에게 화남..
  }

  i = 0;

  printf("오름차순 정렬: ");
  while (i < 10){
    printf("%d ", nums[i]);
    i++;
  }
}