// week7_quiz2.cpp
// 2021112037 문채영

#include <iostream>
#define PI 3.141592

using namespace std;

class Measure {
private :
  double r; //반지름
  double h; //높이
  double w; // 너비
  double l; // 한 변의 길이
public :
  Measure(){ } //일반 생성자

  Measure(double r){ // 원
    this -> r = r;
  }

  Measure(double h, double w){ //직사각형, 삼각형
    this -> h = h;
    this -> w = w;
  }

  void SetHeight(double h){
    this -> h = h;
  }

  void SetLine(double l){
    this -> l = l;
  }

  //원의 면적
  void getCircleArea(){
    cout << "원의 면적은 : " << r * r * PI << endl;
  }

  //직사각형의 면적
  void getRectangleArea() {
    cout << "직사각형의 면적은 : " << w * h << endl;
  }

  //삼각형의 면적
  void getTriangleArea(){
    cout << "삼각형의 면적은 : " << w * h / 2 << endl;
  }

  //정사각형의 면적
  void getEqRectArea(){
    cout << "정사각형의 면적은 : " << l * l << endl;
  }

  //원뿔의 부피
  void getConeVol(){
    cout << "원뿔의 부피는 : " << h * (r * r * PI) / 3 << endl;
  }

  //구의 부피
  void getSphereVol(){
    cout << "구의 부피는 : " << (r * r * r * PI) * 4 / 3 << endl;
  }

  //원기둥 부피
  void getCylinderVol(){
    cout << "실린더의 부피는 : " << h * (r * r * PI) << endl;
  }
};

int main(){
  int choice = 0;
  double radius; //반지름
  double width, height; //너비, 높이
  double length; // 한 변의 길이

  cout << "면적 및 부피 계산기" << endl << endl;

  cout << "1. 원의 면적" << endl;
  cout << "2. 직사각형의 면적" << endl;
  cout << "3. 삼각형의 면적" << endl;
  cout << "4. 정사각형의 면적" << endl;
  cout << "5. 원뿔의 부피" << endl;
  cout << "6. 구의 부피" << endl;
  cout << "7. 실린더의 부피" << endl;

  //사용자로부터 원하는 번호 입력받기
  cout << "입력 : ";
  cin >> choice;
  cout << endl;

  //사용자의 입력에 따른 처리 (조건 : switch문)
  switch(choice){
  case 1 : { // 1. 원의 면적
    //사용자로부터 반지름 입력받기
    cout << "원의 반지름 입력 : ";
    cin >> radius;
    cout << endl;

    Measure *c = new Measure(radius);//동적생성
    c -> getCircleArea();
    delete c;//할당해제

    break;
  }

  case 2 : {//2. 직사각형의 면적
    cout << "직사각형의 높이, 너비 입력 : ";
    cin >> height >> width;
    cout << endl;

    Measure *r = new Measure(height, width); //동적생성
    r -> getRectangleArea();
    delete r;//할당해제

    break;
  }

  case 3 : {//3. 삼각형의 면적
    // 예시화면과 다르게 수정한 부분
    // 두 변의 길이가 아닌 삼각형의 밑변의 길이와 높이를 입력받아야함.
    cout << "삼각형의 높이, 밑변의 길이 입력 : ";
    cin >> height >> width;
    cout << endl;

    Measure *t = new Measure(height, width); // 동적생성
    t -> getTriangleArea();
    delete t; //할당해제

    break;
  }

  case 4 : {//4. 정사각형의 면적
    cout << "정사각형 한 변의 길이 입력 : ";
    cin >> length;
    cout << endl;

    Measure *eq = new Measure(); // 동적생성
    eq -> SetLine(length);
    eq -> getEqRectArea();
    delete eq; //할당해제

    break;
  }

  case 5 : { //5. 원뿔의 부피
    cout << "원뿔의 반지름, 높이 입력 : ";
    cin >> radius >> height;
    cout << endl;

    Measure *cone = new Measure(radius); // 동적생성
    cone -> SetHeight(height);
    cone -> getSphereVol();
    delete cone; // 할당해제

    break;
  }

  case 6 : { // 6. 구의 부피
    cout << "구의 반지름 입력 : ";
    cin >> radius;
    cout << endl;

    Measure *sp = new Measure(radius);
    sp -> getSphereVol();
    delete sp; //할당해제

    break;
  }

  case 7 : { //7. 실린더의 부피
    cout << "실린더의 반지름, 높이 입력 : ";
    cin >> radius >> height;
    cout << endl;

    Measure *cyl = new Measure(radius); //동적생성
    cyl -> SetHeight(height);
    cyl -> getCylinderVol();
    delete cyl; //할당해제
    
    break;
  }
  default : //1~7이 아닌 번호가 입력되었을 경우
    cout << "1~7번만을 입력할 수 있습니다. 그 외의 번호가 입력되었으므로, 프로그램이 종료됩니다."<<endl;
  }

  return 0;

}
