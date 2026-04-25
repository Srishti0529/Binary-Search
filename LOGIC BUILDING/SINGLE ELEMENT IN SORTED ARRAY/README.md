# 📘Single Non-Duplicate Element in Sorted Array (C++)

## 🔍 Problem Statement

Given a **sorted array** where every element appears **exactly twice except one element**, find that single non-duplicate element.

### 🧠 Example

```
Input:  [1, 1, 2, 2, 3, 3, 4]
Output: 4
```

---

## ⚙️ Approach Used

This solution uses **Binary Search** to efficiently find the unique element in **O(log n)** time.

### 💡 Key Idea

* In a sorted array:

  * Pairs of elements appear in order.
  * Before the single element → pairs follow pattern:
    `(even index, odd index)`
  * After the single element → pattern breaks.

We use this pattern to **eliminate half of the array** at each step.

---

## 🚀 Algorithm Steps

1. **Handle Edge Cases**:

   * If only one element → return it.
   * If first element is unique → return it.
   * If last element is unique → return it.

2. **Apply Binary Search**:

   * Find middle index.
   * Check if it's the single element.
   * Use index parity (even/odd) to decide which half to discard.

3. **Repeat until found**.

---

## 🧾 Code Structure

### 🔹 Class: `Solution`

Contains function:

```cpp
int singleNonDuplicate(vector<int>& nums)
```

* Input: Sorted vector of integers
* Output: Single non-duplicate element

### 🔹 Main Function

* Initializes input array
* Calls solution function
* Prints result

---

## ⏱️ Complexity Analysis

| Type  | Complexity |
| ----- | ---------- |
| Time  | O(log n)   |
| Space | O(1)       |

---

## 🧪 Sample Input

```cpp
vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
```

## ✅ Sample Output

```
The single element is: 4
```

---

## ⚠️ Important Notes

* Array **must be sorted**
* All elements appear twice **except one**
* Uses **0-based indexing**

---

## 📌 Use Cases

* Competitive Programming
* Coding Interviews
* Efficient search problems in sorted data

---

## 🏁 Conclusion

This approach avoids brute-force methods and leverages sorted structure + binary search for optimal performance.

---
