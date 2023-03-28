/*
	2021112037 문채영
	심화프로그래밍 실습3 문제 5 week3_quiz5.cpp
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class SelectableRandom{
  int num;
public:
	// 매개변수를 포함한 생성자 SelectableRandom
  SelectableRandom(int number);
  int next();
  int nextInRange(int a, int b);
};
SelectableRandom::SelectableRandom(int number){
  num = number;
	// 진정한 랜덤을 위해 srand 사용
  srand((unsigned)time(0));
}

int SelectableRandom::next() { // 범위 지정 안 하고 쓸 수 있는 난수 생성
	//이 컴퓨터에서는 RAND_MAX가 32767이 아니어서 범위를 따로 지정해줘야한다.
  int domran = rand() % 32767 + 1;
  if(num%2 == 0){ // 짝수반환
    if(domran%2 == 0) // 난수가 짝수이면 짝수 반환
      return domran;
    else //난수가 홀수이면 domran에서 1을 뺀 값을 반환 - 그러면 짝수니까
      return --domran;
  }
  else { // 홀수반환
    if(domran%2 == 0)
      return ++domran; // 난수가 짝수이면 1을 더한 값을 반환 - 그럼 홀수니까
    else
      return domran; // 난수가 짝수이면 짝수 반환
  }
}

int SelectableRandom::nextInRange(int a, int b){ // 범위를 지정해서 쓸 수 있는 난수 생성
  int domran = rand()%(b-a+1) + a;
  if(num%2 == 0) { // 짝수 반환
    if(domran%2 == 0) // 생성된 난수가 짝수이면 그대로 반환(짝수)
      return domran;
    else // 생성된 난수가 홀수이면 1을 더한 후 반환 (짝수)
      return ++domran;
  }
  else { // 홀수 반환
    if(domran%2 == 0) // 생성된 난수가 짝수이면 1을 더한 후 반환(홀수)
      return ++domran;
    else //생성된 난수가 홀수이면 그대로 반환(홀수)
      return domran;
  }
}

int main() {
  SelectableRandom even(0); // 랜덤 정수 - 짝수 ver
  cout << "-- 0에서 32767 까지의 짝수 랜덤 정수 34 개--" << endl;
  for(int i=0; i<34; i++) {
    int n = even.next(); 
    cout << n << "\t";
  } 
    
  SelectableRandom odd(1); // 랜덤 정수 - 홀수 ver
  cout << endl << endl << "-- 77에서 150까지의 랜덤 홀수  정수 17 개 --" << endl;
  for(int i=0; i<17; i++) {
    int n = odd.nextInRange(77,150);
    cout << n << "\t";
  }
  cout << endl;
}