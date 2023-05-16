//0516practice.cpp
#include <iostream>
using namespace std;

class Color {
private:
  int red;
  int green;
  int blue;

public:
  //생성자
  Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

  Color operator+(const Color& other) const {
    int newRed = (red + other.red) % 256;
    int newGreen = (green + other.green) % 256;
    int newBlue = (blue + other.blue) % 256;
    return Color(newRed, newGreen, newBlue);
  }

  bool operator==(const Color& other) const {
    return (red == other.red) && (green == other.green) && (blue == other.blue);
  }

  void show() const {
    cout << "Red: " << red << ", Green: " << green << ", Blue: " << blue << endl;
  }
};

int main() {
  Color red(255, 0, 0), blue(0, 0, 255), c;
  c = red + blue; // red+(blue)
  c.show(); // 색 값 출력

  Color fuchsia(255, 0, 255);
  if (c == fuchsia) // c==(fuchsia) 호출
    cout << "보라색 맞음"<<endl;
  else
    cout << "보라색 아님"<<endl;

  return 0;
}
