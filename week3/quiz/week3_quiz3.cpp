/*
  2021112037 문채영
  심화프로그래밍 실습3 과제2 week3_quiz2.cpp
*/

#include <iostream>
using namespace std;

class CoffeeMachine { // CoffeeMachine 클래스
private : 
  int coffee;
  int water;
  int sugar;
public :
  // 문제의 실행결과에서 제공된 메소드의 이름에 맞게 작성한다.
  CoffeeMachine(int coffee, int water, int sugar);
  void drinkEspresso();
  void drinkAmericano();
  void drinkSugarCoffee();
  void show();
  void fill();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar)
{ // 클래스의 멤버변수와 매개변수가 동일하므로, this 포인터를 사용한다.
  this -> coffee = coffee;
  this -> water = water;
  this -> sugar = sugar;
}

void CoffeeMachine::drinkEspresso()
{ // 에스프레소 한 잔에는 커와 물이 10씩 소비
  coffee = coffee - 10;
  water = water - 10;
}

void CoffeeMachine::drinkAmericano()
{ // 아메리카노는 커피 10, 물 20 소비
  coffee = coffee - 10;
  water = water - 20;
}

void CoffeeMachine::drinkSugarCoffee()
{ // 설탕커피는 커피 10, 물 20, 설탕 10 소비
  coffee = coffee - 10;
  water = water - 20;
  sugar = sugar - 10;
}

// show()는 현재 커피머신의 상태를 출력하는 메소드이다.
void CoffeeMachine::show()
{
  cout<<"커피머신상태, 커피 : "<<coffee<<"  물 : "<<water<<"  설탕:"<<sugar<<endl;
}

// fill() 메소드가 실행되면 커피머신이 다시 채워진다.
void CoffeeMachine::fill()
{
  coffee = 100;
  water = 100;
  sugar = 100;
}

int main(){
  // 문제에서 제공하는 코드
  CoffeeMachine java(50, 70, 60);
  java.drinkEspresso();
  java.show();
  java.drinkAmericano();
  java.show();
  java.drinkSugarCoffee();
  java.show();
  // 커피머신 다시 채우기
  java.fill();
  java.show();
  return 0;
}