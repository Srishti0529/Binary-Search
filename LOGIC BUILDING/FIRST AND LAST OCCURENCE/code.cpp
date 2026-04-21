#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstOccurrence(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int index = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                index = mid;
                e = mid - 1;
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return index;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int index = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                index = mid;
                s = mid + 1;
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int start = firstOccurrence(nums, target);
        int end = lastOccurrence(nums, target);
        return {start, end};
    }
};

int main(){
    vector<int> arr = {1,2,2,2,3,4};
    int target = 2;

    Solution sol;
    vector<int> ans = sol.searchRange(arr, target);

    cout << "First Occurrence: " << ans[0] << endl;
    cout << "Last Occurrence: " << ans[1] << endl;

    return 0;
}