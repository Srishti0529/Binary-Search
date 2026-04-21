# Binary Search (Search Element) – C++ 

## Overview

This program implements **Binary Search** to find a target element in a **sorted array**.

Binary Search works by repeatedly dividing the search space into half until the
 target is found.

If the element exists → return index
If not found → return **-1**

---

## Requirements

* Array must be **sorted**
* Works on ascending order arrays

Example:

```
Array: [1,2,3,4,5]
Target: 3
Output: 2
```

---

## Approach

1. Initialize start and end pointers
2. Find middle index
3. Compare middle with target
4. If equal → return index
5. If target smaller → search left half
6. If target greater → search right half
7. Repeat until found or range ends

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

## Code Structure

### Class

```
Solution
```

### Function

```
int search(vector<int> &nums, int target)
```

### Parameters

* `nums` → sorted array
* `target` → element to search

### Return

* Index if found
* `-1` if not found

---

## Code Explanation

### Initialize pointers

```
int s = 0;
int e = nums.size()-1;
int index = -1;
```

* `s` → start index
* `e` → end index
* `index` → stores answer

---

### Binary Search Loop

```
while(s <= e)
```

---

### Find mid

```
int mid = s + (e - s)/2;
```

---

### If element found

```
if(nums[mid] == target)
```

Return index:

```
index = mid;
return index;
```

---

### If target smaller

```
else if(nums[mid] > target)
```

Search left:

```
e = mid - 1;
```

---

### If target larger

```
s = mid + 1;
```

---

### If not found

```
return -1;
```

---

## Example Walkthrough

Array:

```
[1,2,3,4,5]
```

Target:

```
3
```

| s | e | mid | arr[mid] | action |
| - | - | --- | -------- | ------ |
| 0 | 4 | 2   | 3        | found  |

Output:

```
Element found at index: 2
```

---

## Edge Cases

### Case 1

```
arr = [1,2,3,4,5]
target = 6
```

Output:

```
Element not found
```

---

### Case 2

```
arr = [5]
target = 5
```

Output:

```
0
```

---

### Case 3

```
arr = []
target = 3
```

Output:

```
-1
```

---

## Output

```
Element found at index: 2
```

---

## Key Points

* Works only on sorted arrays
* Much faster than linear search
* Divides search space by half
* Returns index if found otherwise -1
