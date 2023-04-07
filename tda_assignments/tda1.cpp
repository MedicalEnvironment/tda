#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 7;
    int n = arr.size();
    string result = "";

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == complement) {
                result = to_string(arr[i]) + " " + to_string(arr[j]);
                break;
            }
        }
        if (result != "") {
            break;
        }
    }

    cout << result << endl; // output the pair of numbers
    return 0;
}
