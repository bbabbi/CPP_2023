//week5_quiz4.cpp

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14

class Sphere {
private:
  double radius;
  static int cnt;
public:
  Sphere() {
    cnt ++;
    cout << "구 객체 생성" << cnt << endl;
  }

  //반지름 세팅
  void SetRadius(double radius) {
    this -> radius = radius;
  }

  ~Sphere() {
    cout << "구 객체 소멸"<< cnt << endl;
    cnt --;
  }

  // 부피 계산
  double Volume() {
    // 구의 부피 공식 활용
    return 4.0 / 3.0 * PI * pow(radius, 3);
  }
};

// 정적 변수에 대한 정의
int Sphere::cnt = 0;

int main() {
  //5개의 구 생성 - 객체의 동적 생성
  Sphere* mysphere = new Sphere[5];

  // 반지름 입력받기
  for (int i = 0; i < 5; i++) {
    double radius;
    cout << "구 " << i + 1 << "의 반지름 >> ";
    cin >> radius;
    mysphere[i].SetRadius(radius);
  }

  // 부피가 765cm3 보다 큰 구와 작은 구의 개수 출력
  int bigger = 0, smaller = 0;
  for (int i = 0; i < 5; i++) {
    if (mysphere[i].Volume() > 765) {
      bigger++;
    } else {
      smaller++;
    }
  }
  cout << "구의 부피가 765cm3 이상인 큰 구는 : " << bigger << "개 입니다" << endl;
  cout << "구의 부피가 765cm3 이하인 작 구는 : " << smaller << "개 입니다" << endl;

  delete[] mysphere;
  return 0;
}