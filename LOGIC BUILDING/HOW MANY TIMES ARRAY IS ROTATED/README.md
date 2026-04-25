# 📌 Find Number of Rotations in a Rotated Sorted Array (C++)

## 🔍 Problem Statement

Given a **sorted array that has been rotated** `k` times, find the number of rotations.

👉 The number of rotations is equal to the **index of the smallest element**.

---

## 📥 Example

```cpp
Input:  [4, 5, 6, 7, 0, 1, 2, 3]
Output: 4
```

✔ Explanation:
The smallest element is `0`, and its index is `4` → so the array is rotated **4 times**.

---

## 🚀 Approach Used (Binary Search)

### 🧠 Key Idea:

* In a rotated sorted array:

  * One half is always **sorted**
  * The **minimum element** is the only element where order breaks

---

## 🔄 Algorithm Steps

1. Initialize:

   * `low = 0`, `high = n - 1`
   * `ans = INT_MAX`, `index = -1`

2. While `low <= high`:

   * Find `mid`

3. Check if the current search space is already sorted:

   * If `nums[low] <= nums[high]`

     * Then `nums[low]` is the smallest → update answer and break

4. If left half is sorted:

   * Update answer using `nums[low]`
   * Move to right half → `low = mid + 1`

5. Else (right half sorted):

   * Update answer using `nums[mid]`
   * Move to left half → `high = mid - 1`

6. Return `index` (rotation count)

---

## ⚙️ Code Structure

### Class:

```cpp
class Solution {
public:
    int findKRotation(vector<int>& nums);
};
```

### Main Function:

* Creates input array
* Calls function
* Prints rotation count

---

## 📈 Complexity Analysis

| Type  | Complexity |
| ----- | ---------- |
| Time  | O(log n)   |
| Space | O(1)       |

---

## 💡 Example Walkthrough

```cpp
Array: [4,5,6,7,0,1,2,3]

Step-by-step:
- mid → check sorted halves
- gradually eliminate half
- reach minimum element (0)
→ index = 4
```

---

## 🛠️ How to Run

### Compile:

```bash
g++ code.cpp -o code
```

### Run:

```bash
./code
```

(For PowerShell use: `.\code`)

---

## 📚 Key Concepts Used

* Binary Search
* Rotated Sorted Array
* Minimum Element Detection
* Divide and Conquer

---

## ✅ Output

```cpp
The array is rotated 4 times.
```

---

## ⚠️ Assumptions

* Array contains **distinct elements**
* Array was originally sorted in ascending order
* Rotations are done in a circular manner

---

## 🎯 Summary

* The rotation count = index of the **smallest element**
* Binary Search helps reduce time from **O(n)** → **O(log n)**

---
