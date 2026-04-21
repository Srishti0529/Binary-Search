#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       int s = 0;
       int e = nums.size() - 1;
       int index = nums.size();

       while(s <= e){
        int mid = s + (e - s)/2;

        if(nums[mid] == target){
            index = mid;
            return index;
        }
        else if(nums[mid] > target){
            index = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
       }
       return index;
    }
};

int main(){
    vector<int> arr = {1,3,5,6};
    int target = 2;

    Solution sol;
    int index = sol.searchInsert(arr, target);

    cout << "Insert position: " << index << endl;

    return 0;
}