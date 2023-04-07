#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool compare_abs(int a, int b) {
    return abs(a) < abs(b);
}

int main() {
    vector<int> numbers = {-100,-50,-5,1,10,15};

    sort(numbers.begin(), numbers.end(), compare_abs);

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
