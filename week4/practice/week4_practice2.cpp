#include "Calculator.h"
#include <iostream>
using namespace std;

int main() {
  Calculator c;
  c.Add(1, 2);
  c.ShowResult();
  c.Subtract(1,2);
  c.ShowResult();
}