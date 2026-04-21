#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int floor = INT_MIN;
        int ceil = INT_MAX;

        int s = 0, e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == x) {
                return {x, x};
            }
            else if (nums[mid] > x) {
                ceil = min(ceil, nums[mid]);
                e = mid - 1;
            }
            else {
                floor = max(floor, nums[mid]);
                s = mid + 1;
            }
        }

        if (floor == INT_MIN) floor = -1;
        if (ceil == INT_MAX) ceil = -1;

        return {floor, ceil};
    }
};

int main(){
    vector<int> arr = {1, 2, 4, 6, 10};
    int x = 5;

    Solution sol;
    vector<int> ans = sol.getFloorAndCeil(arr, x);

    cout << "Floor: " << ans[0] << endl;
    cout << "Ceil: " << ans[1] << endl;

    return 0;
}