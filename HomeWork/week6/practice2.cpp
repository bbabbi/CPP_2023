// week 6 practice2.cpp

#include <iostream>
using namespace std;

char& find(char s[], int index) {
  return s[index]; // 참조리턴
}

int main(){
  char school[] = "DonggukUniv";
  cout << school << endl;

  find(school, 10) = 't'; // name[10]

  char& ref = find(school, 1);
  ref = '0'; // name = "D0nggukUniv"
  cout << school << endl;
}