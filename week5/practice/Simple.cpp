// this 포인터 적용해서 바꿔보기

#include <iostream>
using namespace std;

class Simple {
private :
  int m_ID;
public :
  Simple(int id){
    SetID(id);
  }

  void SetID(int id){
    m_ID = id;
  }

  int GetID(){
    return m_ID;
  }
  
};

int main(){
  Simple simple(159);
  simple.SetID(123456789);
  cout << simple.GetID() << endl;
  return 0;
}