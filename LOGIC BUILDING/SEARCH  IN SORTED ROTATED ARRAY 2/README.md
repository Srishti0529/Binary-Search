# 📌 Search in Rotated Sorted Array II (With Duplicates) – C++

## 🔍 Problem Statement

Given a **rotated sorted array that may contain duplicates**, determine if a target element `k` exists in the array.

👉 Return:

* `true` if the element is found
* `false` otherwise

---

## 📥 Example

```cpp
Input:  nums = [2, 5, 6, 0, 0, 1, 2], k = 0
Output: true
```

✔ Explanation:
The element `0` exists in the rotated array.

---

## 🚀 Approach Used (Modified Binary Search)

### 🧠 Key Idea:

* Even after rotation, **at least one half is sorted**
* But due to **duplicates**, identifying the sorted half can be tricky

---

## ⚠️ Special Case (Duplicates)

```cpp
if (nums[s] == nums[mid] && nums[mid] == nums[e])
```

👉 When all three are equal:

* We **cannot determine** which side is sorted
* So we shrink the search space:

  * `s++`, `e--`

---

## 🔄 Algorithm Steps

1. Initialize:

   * `s = 0`, `e = n - 1`

2. While `s <= e`:

   * Find `mid`

3. If `nums[mid] == k`

   * Return `true`

4. Handle duplicates:

   * If `nums[s] == nums[mid] == nums[e]`

     * Shrink search space

5. Check which half is sorted:

   ### 👉 Left Half Sorted

   ```cpp
   if (nums[mid] >= nums[s])
   ```

   * If `k` lies in left half → move left
   * Else → move right

   ### 👉 Right Half Sorted

   ```cpp
   else
   ```

   * If `k` lies in right half → move right
   * Else → move left

6. If not found → return `false`

---

## ⚙️ Code Structure

### Class:

```cpp
class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k);
};
```

### Main Function:

* Initializes array and target
* Calls search function
* Prints result

---

## 📈 Complexity Analysis

| Case       | Time Complexity |
| ---------- | --------------- |
| Average    | O(log n)        |
| Worst Case | O(n)            |

👉 Worst case occurs due to **duplicates** (e.g., all elements same)

---

## 💡 Example Walkthrough

```cpp
Array: [2,5,6,0,0,1,2], k = 0

Step 1:
mid = 3 → nums[mid] = 0 → FOUND

Result: true
```

---

## 🛠️ How to Run

### Compile:

```bash
g++ code.cpp -o code
```

### Run:

* PowerShell:

  ```
  .\code
  ```
* Linux/Mac:

  ```
  ./code
  ```

---

## 📚 Key Concepts Used

* Binary Search
* Rotated Sorted Array
* Handling Duplicates
* Search Space Reduction

---

## ⚠️ Important Notes

* Duplicates can break normal binary search logic
* That’s why we **shrink both ends** when unsure

---

## 🎯 Summary

* Use **modified binary search**
* Carefully handle duplicates
* Efficient in most cases but can degrade to **O(n)**

---

## ✅ Output

```cpp
Element found in array
```

---
