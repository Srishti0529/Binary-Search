#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k) {
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int mid = (e + s) / 2;

            if (nums[mid] == k) {
                return true;
            }

            // Handle duplicates
            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                s = s + 1;
                e = e - 1;
                continue;
            }

            // Left half is sorted
            if (nums[mid] >= nums[s]) {
                if (nums[s] <= k && nums[mid] >= k) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (nums[e] >= k && nums[mid] <= k) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }
        return false;
    }
};

int main() {
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};  // rotated sorted array with duplicates
    int target = 0;

    Solution sol;
    bool found = sol.searchInARotatedSortedArrayII(nums, target);

    if (found) {
        cout << "Element found in array" << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}