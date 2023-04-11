// week4_quiz3.cpp

#include <iostream>
using namespace std;

int main() {
  int num;
  int push;

  cout << "정수를 얼마나 입력받을까요? : ";
  cin >> num;

  /*
    출제자가 if문을 사용할 것을 조건으로 제공했는데,
    출제자의 의도에 맞게 사용한건지 의문.
  */

  if(num <= 0){
    cout << "입력받을 정수의 개수를 0이 아닌 정수로 입력해주세요";
  }
  else{
    int* point = new int [num]; //배열 형태 메모리 동적할당
    
    // 정수입력
    for(int i = 0; i < num; i++){
      cout << "정수입력 : ";
      cin >> push;
      point[i] = push;
    }

    // 입력받은 정수
    cout << "정수출력 : ";
    for(int i = 0; i < num; i++){
      cout << point[i] << " ";
    }
    cout << endl;

    delete[] point;
  }
}