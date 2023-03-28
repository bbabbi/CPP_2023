/*
  2021112037 문채영
  심화프로그래밍 실습3 과제2 week3_quiz2.cpp
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random{
public:
  Random();
  int next();
  int nextInRange(int a, int b);
};
Random::Random(){
  srand((unsigned)time(0));
}

int Random::next() {
  //RAND_MAX가 32767이 아니어서 범위를 따로 지정해줘야했다
  return rand()%32767 + 1;
} 
int Random::nextInRange(int a, int b){
  return rand()%(b-a+1) + a;
}

int main() {
  Random r;

  cout << "-- 0에서 32767 까지의 랜덤 정수 55 개--" << endl;
  // 55개인지 가시적으로 확인하기 위해 5 x 25 형태롤 출력하려고 중첩 반복문 사용.
	for(int j=0; j < 10; j++){
		for(int i=0; i<5; i++) {
			int n = r.next(); // 0에서 32767 사이의 랜덤한 정수
			cout << n << "\t";
		}
		cout << endl;
	}

  cout << endl << endl << "-- 25에서 " << "367 까지의 랜덤 정수 70 개 --" << endl;
  for(int j=0; j<7; j++){
    for(int i=0; i<10; i++) {
      int n = r.nextInRange(25, 367); // 2에서 4 사이의 랜덤한 정수
      cout << n << "\t";
    }
    cout << endl;
  }
}
