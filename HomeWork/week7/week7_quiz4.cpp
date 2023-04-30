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
  void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

Person::Person(int id, string name, double weight){
  this->id = id;
  this->weight = weight;
  this->name = name;
}

int main() {
  int num;
  cout << "Enter the number of persons: "; // 몇 명의 사람을 생성할 것인지 입력받음
  cin >> num;

  Person *myperson = new Person[num];

  int i = 0;
  // 입력받은 수만큼 정보를 입력받음
  while (i < num) {
    string name;
    double weight;
    cout << "Enter the name and weight for person " << i+1 << ": ";
    cin >> name >> weight;
    myperson[i] = Person(i+1, name, weight);
    i++;
  }

  i = 0;
  // 출력
  while (i < num) {
    cout << "Person " << i+1 << ": ";
    myperson[i].show();
    i++;
  }

  delete[] myperson; // 할당 해제
  return 0;
}
