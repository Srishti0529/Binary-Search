#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int search(vector<int> &nums, int k) {
        int s = 0;
        int e = nums.size() - 1;
        int index = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == k) {
                index = mid;
                return index;
            } 
            else if (nums[s] <= nums[mid]) {
                if (nums[s] <= k && nums[mid] >= k) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            } 
            else {
                if (nums[mid] < k && k <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }
        return index;
    }
};

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;

    Solution sol;
    int index = sol.search(arr, target);

    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}