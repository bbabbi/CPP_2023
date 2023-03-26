/*
  2021112037 문채영
  심화프로그래밍 실습3 과제2 week3_quiz2.cpp
*/

#include <iostream>
// 문제의 조건에 맞는 헤더파일 cstdlib와 ctime
#include <cstdlib>
#include <ctime>

using namespace std;

// class Random {
// 	int seed = 0;
// public:
// 	int next();
// 	int nextInRange(int start, int end);
// };

// int Random::next() {
// 	//srand((unsigned int)time(0));
// 	int n = rand();
// 	return n;
// }
// int Random::nextInRange(int start, int end) {
// 	//srand((unsigned int)time(0));
// 	int n = rand() % (end - start + 1) + start;
// 	return n;
// }

// int main() {
// 	Random r;
// 	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개--" << endl;
// 	for (int i = 0; i < 10; i++) {
// 		int n = r.next();
// 		cout << n << ' ';
// 	}
// 	cout << endl << endl << "-- 2에서 4까지의 랜덤 정수 10개 --" << endl;
// 	for (int i = 0; i < 10; i++) {
// 		int n = r.nextInRange(2, 4);
// 		cout << n << ' ';
// 	}
// 	cout << endl;
// 	return 0;
// }


class Random{
public : 
	int next();
	int nextInRange(int a, int b);
	Random();
};

Random::Random(){
	srand((unsigned int)time(0));
}

int Random::next(){
	return rand();
}

int Random::nextInRange(int a, int b){
	return rand() % (b - a + 1) + a;
}