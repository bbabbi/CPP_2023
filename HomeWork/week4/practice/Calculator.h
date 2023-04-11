#include <iostream>
#pragma once

class Calculator {
private :
  int a;
  int b;
  int result;
public :
  Calculator() {
    a = 0;
    b = 0;
    result = 0;
    std :: cout << "계산기 생성" <<  std::endl;
  }

  ~Calculator() {}

  void Add(int x, int y){
    a = x;
    b = y;
    result = a + b;
  }
  
  void Subtract(int x, int y){
    a = x;
    b = y;
    result = a - b;
  }

  void ShowResult() {
    std :: cout << "result : " << result << std::endl;
  }
};