//1.Two Sum – Find indices of two numbers that add up to a target.
/*
You're given an array of integers nums and a target integer target.
Find two distinct elements in the array whose sum equals the target, and return their indices.
Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]  // Because nums[0] + nums[1] == 2 + 7 == 9
*/
#include <iostream>
using namespace std;

void add(int arr[], int target, int len) {
    int result[2] = {-1, -1};

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == target) {
                result[0] = i;
                result[1] = j;

                // Print immediately and return to stop unnecessary checks
                cout << result[0] << endl;
                cout << result[1] << endl;
                return;
            }
        }
    }

    // Optional: handle case when no such pair is found
    cout << "No such pair found" << endl;
}

int main() {
    int arr[10] = {2, 7, 11, 15}; // remaining values are 0s
    int target = 9;
    int len = sizeof(arr) / sizeof(arr[0]);
    add(arr, target, len);

    return 0;
}
