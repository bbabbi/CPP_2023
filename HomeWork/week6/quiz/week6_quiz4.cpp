#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class BubbleSort {
private:
  int* arr; // 동적할당할 정수 배열
  int size; // 배열의 크기

public:
  BubbleSort(int n) { // 생성자
    arr = new int[n];
    size = n;
  }

  ~BubbleSort() { // 소멸자
    delete[] arr;
  }

  void generateRandomIntegers() { // 랜덤 정수 생성
    srand((unsigned int)time(NULL)); // 시드 설정
    for (int i = 0; i < size; i++) {
      arr[i] = rand() % 100; // 난수 발생
    }
  }

  void printArray() { // 배열 출력
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void bubbleSort() { // 버블 sort
    for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
        // 앞뒤원소 비교
        if (arr[j] > arr[j + 1]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  }
};

int main() {
  BubbleSort bsort(10);
  bsort.generateRandomIntegers();
  cout << "Original array: ";
  bsort.printArray();
  bsort.bubbleSort();
  cout << "Sorted array: ";
  bsort.printArray();
  
  return 0;
}