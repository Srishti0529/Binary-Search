# Search in Rotated Sorted Array – C++ README

## Overview

This program searches for a target element in a **rotated sorted array** using **Binary Search**.
If the element is found, return its index. Otherwise return **-1**.

A rotated sorted array is a sorted array rotated at some pivot.

Example:

```
[4,5,6,7,0,1,2]
```

---

## Example

Input:

```
arr = [4,5,6,7,0,1,2]
target = 0
```

Output:

```
Element found at index: 4
```

---

## Approach

1. Use Binary Search
2. Check which half is sorted
3. If left half sorted → check if target lies in left
4. Else right half sorted → check if target lies in right
5. Move search space accordingly
6. Repeat until found or search space ends

---

## Conditions

Left half sorted:

```
nums[s] <= nums[mid]
```

Target in left half:

```
nums[s] <= target && target <= nums[mid]
```

Right half sorted:

```
nums[mid] <= nums[e]
```

Target in right half:

```
nums[mid] <= target && target <= nums[e]
```

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

## Example Walkthrough

Array:

```
[4,5,6,7,0,1,2]
```

Target:

```
0
```

Step 1:

```
mid = 7
left half sorted
target not in left
search right
```

Step 2:

```
mid = 1
right half sorted
target not in right
search left
```

Step 3:

```
found at index 4
```

---

## Edge Cases

Case 1

```
arr = [1]
target = 1
output = 0
```

Case 2

```
arr = [1]
target = 0
output = -1
```

Case 3

```
arr = [3,1]
target = 1
output = 1
```

---

## Output

```
Element found at index: 4
```
