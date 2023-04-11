/*
  2021112037 문채영
  심화프로그래밍 실습3 과제1 week3_quiz1.cpp
*/

#include <iostream>
using namespace std;

class YoutubeSize {
private :
//빈칸 1
  int width;
  int height;

public :
  YoutubeSize();
  YoutubeSize(int, int);
  int GetWidth();
  int GetHeight();
  void ResizeWindow(int, int);
};

YoutubeSize::YoutubeSize() : width(800), height(600){ }
YoutubeSize::YoutubeSize(int w, int h){
  ResizeWindow(w, h);
}

int YoutubeSize::GetHeight() {
  //빈칸 2
  return height;
}
int YoutubeSize::GetWidth() {
  //빈칸 3
  return width;
}

//빈칸 4 - 매개변수 부분
void YoutubeSize::ResizeWindow(int w, int h){
  if(w > 800) width = w;
  else width = 800;

  if(h > 600) height = h;
  else height = 600;
}

int main() {
  YoutubeSize mainWindow;

  mainWindow.ResizeWindow(1920, 1080);
  //빈칸 5
  cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;

  mainWindow.ResizeWindow(3840,2160);
  //빈칸 6
  cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;

  mainWindow.ResizeWindow(5120,2880);
  //빈칸 7
  cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;

  return 0;
}