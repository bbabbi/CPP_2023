#include <iostream>
using namespace std;

int main(){
  int temp = 0;
  int nums[10];
  int i=0, j=0;

  cout<<"배열의 원소를 입력하세요. : ";
  while(i < 10){
    scanf("%d", &nums[i]);
    i++;
  }

  i = 0;

  cout<<"데이터 출력: ";
  while(i<10){
    cout<<nums[i]<<" ";
    i++;
    j=0;
  }
  cout<<""<<endl;

  i=0;
  while( i<10 ){
    while( j<10 ){
      if(nums[i] < nums[j]){
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
      j++;
    }
    i++;
    j=0;
  }

  cout<<"오름차순 정렬: ";
  i=0;
  while( i < 10 ){
    cout<<nums[i]<<" ";
    i++;
  }

}