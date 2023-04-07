#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> a = {-2,1,-3,4,-1,2,1,-5,4}; // given array
    int n = a.size();

    double max_sum = a[0]; // maximum sum so far
    double cur_sum = a[0]; // current maximum sum ending at each index
    int max_start = 0; // start index of maximum sum subarray
    int max_end = 0; // end index of maximum sum subarray
    int cur_start = 0; // start index of current sum subarray

    for (int i = 1; i < n; i++) {
        // update current maximum sum ending at each index
        if (cur_sum + a[i] > a[i]) {
            cur_sum += a[i];
        } else {
            cur_sum = a[i];
            cur_start = i;
        }

        // update maximum sum so far and its indexes
        if (cur_sum > max_sum) {
            max_sum = cur_sum;
            max_start = cur_start;
            max_end = i;
        }
    }

    cout << max_start << " " << max_end << endl; // output the indexes
    return 0;
}
