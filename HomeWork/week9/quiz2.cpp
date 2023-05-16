#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

class Sorting {
public:
    Sorting() {}

    void readFile(string file) {
        ifstream inputFile(file);
        int num;
        while (inputFile >> num) {
            numbers.push_back(num);
        }
        inputFile.close();
    }

    void writeFile(string file) {
        ofstream outputFile(file);
        for (int i = 0; i < numbers.size(); i++) {
            outputFile << numbers[i] << " ";
        }
        cout << endl;
        outputFile.close();
    }

    void sort(bool descending) {
        if (descending) {
            DescendingSort();
        } else {
            AscendingSort();
        }
    }

private:
    vector<int> numbers;

    void AscendingSort() {
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] > numbers[j]) {
                    swap(numbers[i], numbers[j]);
                }
            }
        }
    }

    void DescendingSort() {
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] < numbers[j]) {
                    swap(numbers[i], numbers[j]);
                }
            }
        }
    }
};

int main() {
    srand(time(NULL)); // srand() 함수를 호출하여 시드값을 설정합니다.
    ofstream outputFile("input.txt");
    for (int i = 0; i < 1000; i++) {
        outputFile << rand() % 10000 << endl; // 0부터 9999까지의 난수를 생성하여 파일에 저장합니다.
    }
    outputFile.close();

    Sorting sorter;
    sorter.readFile("input.txt");
    sorter.sort(false); // true: 내림차순, false: 오름차순
    sorter.writeFile("output.txt");

    return 0;
}
