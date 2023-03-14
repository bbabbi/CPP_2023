/*
2021112037 문채영
week1_quiz2.c
심화프로그래밍 1주차 실습과제 3번
*/

#include <iostream>
using namespace std;

// Number 클래스
class Number {
public:
  int nums;
};

int main(){
  int temp = 0;
  int i=0, j=0;
  // 객체 배열 선언
  Number num[10];
  // 이후 계속 등장하는 num[i].nums는 객체배열에 접근하는 것

  // nums배열의 데이터 입력받기
  cout<<"배열의 원소를 입력하세요. : ";
  while(i < 10){
    cin >> num[i].nums;
    i++;
  }

  i = 0;

  // nums 배열의 데이터 출력
  cout<<"데이터 출력: ";
  while(i<10){
    cout<<num[i].nums<<" ";
    i++;
    j=0;
  }
  cout<<endl;

  i=0;
  // nums 배열의 원소들 오름차순 정렬
  while( i<10 ){
    while( j<10 ){
      if(num[i].nums < num[j].nums){
        temp = num[i].nums;
        num[i].nums = num[j].nums;
        num[j].nums = temp;
      }
      j++;
    }
    i++;
    j=0;
  }

  // 오름차순 정렬된 nums 배열의 원소들을 출력
  cout<<"오름차순 정렬: ";
  i=0;
  while( i < 10 ){
    cout<<num[i].nums<<" ";
    i++;
  }

}