#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr) {
        int s = 0;
        int e = arr.size() - 1;
        
        while (s < e) {
            int mid = (s + e) / 2;
            
            if (arr[mid] < arr[e]) {
                e = mid;          // keep mid (it can be minimum)
            } else {
                s = mid + 1;      // minimum is in right half
            }
        }
        return arr[s];
    }
};

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};  // rotated sorted array

    Solution sol;
    int ans = sol.findMin(arr);

    cout << "Minimum element is: " << ans << endl;

    return 0;
}