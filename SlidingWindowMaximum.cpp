//Sliding Window Maximum – Find max in every k-sized window.

#include <iostream>
#include <deque>
#include <vector>

std::vector<int> slidingWindowMaximum(const std::vector<int>& nums, int k) {
    std::deque<int> dq;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        // Remove elements out of the current window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove elements smaller than the current element
        while (!dq.empty() && nums[dq.back()] <= nums[i]) {
            dq.pop_back();
        }

        // Add current element at the back of the deque
        dq.push_back(i);

        // The front of the deque is the largest element of the current window
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    std::vector<int> maxValues = slidingWindowMaximum(nums, k);

    std::cout << "Sliding Window Maximums: ";
    for (int val : maxValues) {
        std::cout << val << " ";
    }

    return 0;
}
