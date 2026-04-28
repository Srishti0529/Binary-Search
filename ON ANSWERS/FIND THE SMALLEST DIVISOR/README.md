# 📘 Smallest Divisor 

## 📌 Problem Statement

Given an array `nums` and an integer `limit`, find the **smallest divisor** such that:

sum of ceil(nums[i] / divisor) ≤ limit

Return `-1` if not possible.

---

## 💡 Approach

Use **Binary Search on Answer** (divisor value).

### Search Space

* low = 1
* high = max(nums)

---

## 🔹 Logic

1. Pick mid = (low + high) / 2
2. Compute sum:
   sum += (nums[i] + mid - 1) / mid
3. Compare with limit:

   * if sum ≤ limit → try smaller divisor (high = mid - 1)
   * else → increase divisor (low = mid + 1)

---

## 🧠 Intuition

* Smaller divisor → more chunks → sum increases
* Larger divisor → fewer chunks → sum decreases
* Find the **minimum valid divisor**

---

## ⏱️ Complexity

* Time: O(n * log(max(nums)))
* Space: O(1)

---

## ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int> &nums, int divisor) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + divisor - 1) / divisor;
        }
        return sum;
    }

    int smallestDivisor(vector<int> &nums, int limit) {
        int s = 1;
        int e = *max_element(nums.begin(), nums.end());

        while (s <= e) {
            int mid = (s + e) / 2;

            if (helper(nums, mid) <= limit) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return s;
    }
};
```

---

## 📌 Example

nums = [1,2,3,4,5], limit = 8
Output = 3

---

## 🔥 Key Points

* No sorting required
* Binary search on divisor, not array
* Use (nums[i] + divisor - 1) / divisor instead of ceil
