#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Helper function to calculate sum of ceil divisions
    int sumByD(vector<int>& nums, int divisor) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            // Equivalent to ceil(nums[i] / divisor)
            sum += (nums[i] + divisor - 1) / divisor;
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int>& nums, int limit) {
        int n = nums.size();
        
        // Edge case
        if (n > limit) return -1;

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = (low + high) / 2;

            if (sumByD(nums, mid) <= limit) {
                high = mid - 1;   // try smaller divisor
            } else {
                low = mid + 1;    // increase divisor
            }
        }

        return low;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int limit = 8;

    Solution sol;
    int ans = sol.smallestDivisor(nums, limit);

    cout << "The minimum divisor is: " << ans << endl;

    return 0;
}