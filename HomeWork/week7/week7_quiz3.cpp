// week7_quiz3.cpp
// 2021112037 문채영

#include<iostream>
#include<string>
using namespace std;

class Person {
  int id;
  double weight;
  string name;
public:
  Person();
  Person(int id, string name);
  Person(int id, string name, double weight);
  void show() { cout << id << "번 " << weight << " " << name << endl; }
};

//생성자 중복 작성한 프로그램 구현
Person::Person() {
  id = 1;
  weight = 74.9;
  name = "Alice";
}

Person::Person(int id, string name) {
  this->id = id;
  weight = 74.9;
  this->name = name;
}

Person::Person(int id, string name, double weight) {
  this->id = id;
  this->weight = weight;
  this->name = name;
}

int main() {
  Person alice, bob(2, "Bob"), mallory(3, "Mallory", 99.5);
  alice.show();
  bob.show();
  mallory.show();
}