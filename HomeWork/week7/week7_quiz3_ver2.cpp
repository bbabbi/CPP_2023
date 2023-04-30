// week7_quiz3_ver2.cpp
// 2021112037 문채영

#include<iostream>
#include<string>
using namespace std;

class Person {
  int id;
  double weight;
  string name;
public:
  //default 매개변수를 가진 생성자
  Person(int id = 1, string name = "Alice", double weight = 74.9);
  void show() { cout << id << "번 " << weight << " " << name << endl; }
};

Person::Person(int id, string name, double weight){
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
