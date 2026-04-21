#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int s = 0;
        int e = nums.size() - 1;
        int ans = nums.size();

        while(s <= e){
            int mid = s + (e - s)/2;

            if(nums[mid] > x){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> arr = {1, 2, 2, 3};
    int x = 2;

    Solution sol;
    int index = sol.upperBound(arr, x);

    cout << "Upper bound index: " << index << endl;

    return 0;
}