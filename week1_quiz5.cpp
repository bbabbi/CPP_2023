#include <iostream>
using namespace std;

int fib( int n ){
  if(n <= 0){
    return 0;
  }
  else if( n == 1 ){
    return 1;
  }
  else{
    return fib(n-2) + fib(n-1);
  }
}

int main(){
  int n;
  cout << "원하는 숫자 n을 입력하세요 : ";
  cin >> n;

  cout << fib(n) << endl;

}
