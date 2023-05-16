// week9_quiz2.cpp
// 2021112037 문채영

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void read_file(const string& file_name, vector<int>& numbers) {
    ifstream file(file_name);

    if (file.is_open()) {
        int number;

        while (file >> number) {
            numbers.push_back(number);
        }

        file.close();
    }
}

void bubble_sort(vector<int>& numbers, bool descending) {
    int size = numbers.size();

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((descending && numbers[j] < numbers[j + 1]) || (!descending && numbers[j] > numbers[j + 1])) {
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

void write_file(const string& file_name, const vector<int>& numbers) {
    ofstream file(file_name);

    if (file.is_open()) {
        for (int number : numbers) {
            file << number << " ";
        }

        file.close();
    }
}

int main() {
    vector<int> numbers;
    string file_name;
    bool descending;

    cout << "Enter file name: ";
    cin >> file_name;

    cout << "Sort in descending order? (1 for yes, 0 for no): ";
    cin >> descending;

    read_file(file_name, numbers);
    bubble_sort(numbers, descending);
    write_file(file_name, numbers);

    return 0;
}
