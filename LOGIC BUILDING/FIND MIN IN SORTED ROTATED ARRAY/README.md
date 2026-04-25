# 📌 Find Minimum Element in Rotated Sorted Array (C++)

## 🔍 Problem Statement

Given a **sorted array that has been rotated**, find the **minimum element** in the array.

👉 The array was originally sorted in ascending order but rotated at some pivot.

---

## 📥 Example

```cpp
Input:  [3, 4, 5, 1, 2]
Output: 1
```

✔ Explanation:
The array is rotated, and the smallest element is `1`.

---

## 🚀 Approach Used (Binary Search)

### 🧠 Key Idea:

* In a rotated sorted array:

  * One half is always **sorted**
  * The **minimum element lies in the unsorted part**

---

## 🔄 Algorithm Steps

1. Initialize:

   * `s = 0`, `e = n - 1`

2. While `s < e`:

   * Find `mid = (s + e) / 2`

3. Compare `arr[mid]` with `arr[e]`:

   * If `arr[mid] < arr[e]`

     * Minimum is in **left part (including mid)**
     * → `e = mid`
   * Else

     * Minimum is in **right part**
     * → `s = mid + 1`

4. Loop ends when `s == e`

   * Return `arr[s]`

---

## ⚙️ Code Structure

### Class:

```cpp
class Solution {
public:
    int findMin(vector<int> &arr);
};
```

### Main Function:

* Initializes the array
* Calls `findMin()`
* Prints the result

---

## 📈 Complexity Analysis

| Type  | Complexity |
| ----- | ---------- |
| Time  | O(log n)   |
| Space | O(1)       |

---

## 💡 Example Walkthrough

```cpp
Array: [3,4,5,1,2]

Step 1:
mid = 2 → arr[mid] = 5, arr[e] = 2
→ move right → s = mid + 1

Step 2:
mid = 3 → arr[mid] = 1
→ minimum found

Result = 1
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
* Divide and Conquer

---

## ⚠️ Assumptions

* Array contains **distinct elements**
* Array is **non-empty**
* Originally sorted in ascending order

---

## 🎯 Summary

* Efficient way to find minimum using **Binary Search**
* Avoids linear scan → improves performance from **O(n)** to **O(log n)**

---

## ✅ Output

```cpp
Minimum element is: 1
```

---
