#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int search(vector<int> &nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int index = -1;

        while(s <= e){
            int mid = s + (e - s)/2;

            if(nums[mid] == target){
                index = mid;
                return index;
            }
            else if(nums[mid] > target){
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
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;

    Solution sol;
    int index = sol.search(arr, target);

    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}