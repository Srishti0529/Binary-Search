# Search Insert Position (Binary Search) – C++ README

## Overview

This program finds the **index of a target element** in a sorted array.
If the target is not present, it returns the **position where the element should be inserted**.

The solution uses **Binary Search** for efficient searching.

---

## Definition

* If target exists → return its index
* If target does not exist → return insert position
* Array must be **sorted**

---

## Example

```
Input:
arr = [1,3,5,6]
target = 2

Output:
1
```

Explanation:
2 should be inserted at index **1** to maintain sorted order.

---

## Approach

1. Initialize start and end pointers
2. Find middle index
3. If element found → return index
4. If middle greater than target → move left and store index
5. If middle smaller → move right
6. Return stored index

---

## Time Complexity

```
O(log n)
```

## Space Complexity

```
O(1)
```

---

## Function

```
int searchInsert(vector<int> &nums, int target)
```

### Parameters

* nums → sorted array
* target → element to search

### Returns

* index if found
* insert position if not found

---

## Example Walkthrough

Array:

```
[1,3,5,6]
```

Target:

```
2
```

Steps:

| s | e | mid | nums[mid] | action             |
| - | - | --- | --------- | ------------------ |
| 0 | 3 | 1   | 3         | store 1, move left |
| 0 | 0 | 0   | 1         | move right         |

Return:

```
1
```

---

## Edge Cases

Case 1

```
arr = [1,3,5,6]
target = 5
output = 2
```

Case 2

```
arr = [1,3,5,6]
target = 0
output = 0
```

Case 3

```
arr = [1,3,5,6]
target = 7
output = 4
```

---

## Output

```
Insert position: 1
```
