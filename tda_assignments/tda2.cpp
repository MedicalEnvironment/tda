#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers;
    string input;
    int num;

    while (true) {
        cin >> input;
        if (input == "-1") {
            // sort the vector in descending order and output the 5th largest number
            sort(numbers.rbegin(), numbers.rend());
            if (numbers.size() >= 5) {
                cout << numbers[4] << endl;
            } else {
                cout << "Not enough numbers entered" << endl;
            }
        } else if (input == "-2") {
            // exit the program
            break;
        } else {
            // parse the input as an integer and add it to the vector
            num = stoi(input);
            numbers.push_back(num);
        }
    }

    return 0;
}
