// week4_quiz5.cpp

#include <iostream>
using namespace std;

// books 클래스
class books {
private :
  string name;
  int price;
public :
  books(){} /**/
  books(string bookname, int bookprice)
    : name(bookname), price(bookprice) {}

  string returnName(){
    return name;
  }

  int returnPrice(){
    return price;
  }
};

int main() {
  // 출력 예시처럼 책 3권에 대해 반복하는 것으로 작성함.
  int num;

  cout << "몇 권의 책에 대한 정보를 입력할까요? : ";
  cin >> num;

  if(num <= 0){
    cout << "책의 권 수는 양의 정수로 입력해주세요." <<endl;
  }
  else {
    // 객체 배열 선언
    books* mybook = new books[num];
    for(int i = 0; i < num; i++){
      string name;
      int price;
      
      // 책 정보 입력받기
      cout << "책 " << i+1 << "번 제목 및 가격 입력" << endl;
      cout << "제목 : ";
      cin >> name;
      cout << "가격 : ";
      cin >> price;
      cout << endl;

      mybook[i] = books(name, price);
    }

    // 책 정보 출력
    for(int i = 0; i < num; i++){
      cout << "책 " << i+1 << endl;
      cout << "제목 : " << mybook[i].returnName() << endl;
      cout << "가격 : " << mybook[i].returnPrice() << endl;
    }

    //메모리 할당 해제
    delete[] mybook;
  }

  return 0;
}