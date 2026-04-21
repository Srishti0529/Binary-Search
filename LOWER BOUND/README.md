# Lower Bound using Binary Search – C++ 

## Overview

This program finds the **lower bound** of a given element `x` in a **sorted array** using **Binary Search**.

**Lower Bound:**
The **first index** where element is **greater than or equal to `x`**.

Example:

```
Array: [1, 2, 2, 3]
x = 2
Lower Bound Index = 1
```

---

## Approach

This implementation uses **Binary Search** to efficiently find the lower bound.

### Steps

1. Initialize start (`s`) and end (`e`)
2. Compute mid index
3. If `nums[mid] >= x`

   * store mid in answer
   * search left half
4. Else search right half
5. Return stored answer

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
int lowerBound(vector<int> &nums, int x)
```

### Parameters

* `nums` → Sorted array
* `x` → Target value

### Returns

* First index where element ≥ x
* If not found → returns array size

---

## Code Explanation

### Initialize variables

```
int s = 0;
int e = nums.size() - 1;
int ans = nums.size();
```

* `s` → start index
* `e` → end index
* `ans` → stores lower bound index

---

### Binary Search Loop

```
while(s <= e)
```

Loop until search space exists.

---

### Find middle index

```
int mid = s + (e - s)/2;
```

Avoids integer overflow.

---

### If condition satisfied

```
if(nums[mid] >= x)
```

* store mid as answer
* move left

```
ans = mid;
e = mid - 1;
```

---

### Else move right

```
s = mid + 1;
```

---

### Return result

```
return ans;
```

---

## Main Function Flow

Input:

```
vector<int> arr = {1,2,2,3};
int x = 2;
```

Function Call:

```
sol.lowerBound(arr,x);
```

Output:

```
Lower bound index: 1
```

---

## Example Walkthrough

Array:

```
[1,2,2,3]
```

x = 2

| s    | e | mid | arr[mid] | action             |
| ---- | - | --- | -------- | ------------------ |
| 0    | 3 | 1   | 2        | store 1, move left |
| 0    | 0 | 0   | 1        | move right         |
| stop |   |     |          | return 1           |

---

## Edge Cases

### Case 1

```
arr = [1,3,5,7]
x = 6
```

Output:

```
3
```

### Case 2

```
arr = [5,6,7]
x = 1
```

Output:

```
0
```

### Case 3

```
arr = [1,2,3]
x = 10
```

Output:

```
3
```

---

## Why Binary Search is Better

| Method        | Time Complexity |
| ------------- | --------------- |
| Linear Search | O(n)            |
| Binary Search | O(log n)        |

Binary search is much faster for large arrays.

---

## Output

```
Lower bound index: 1
```
