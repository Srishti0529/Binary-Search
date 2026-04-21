# Upper Bound using Binary Search – C++ README

## Overview

This program finds the **upper bound** of a given value `x` in a **sorted array** using **Binary Search**.

**Upper Bound Definition:**
The **first index** where the element is **strictly greater than `x`**.

Example:

```
Array: [1, 2, 2, 3]
x = 2
Upper Bound Index = 3
```

---

## Approach

This solution uses **Binary Search** to efficiently locate the upper bound.

### Steps

1. Initialize start (`s`) and end (`e`)
2. Find middle index
3. If `nums[mid] > x`

   * store mid in answer
   * move left
4. Else move right
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
int upperBound(vector<int> &nums, int x)
```

### Parameters

* `nums` → sorted array
* `x` → target value

### Returns

* First index where element > x
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
* `ans` → stores upper bound index

---

### Binary Search Loop

```
while(s <= e)
```

Search until valid range exists.

---

### Calculate mid

```
int mid = s + (e - s)/2;
```

---

### If element greater than x

```
if(nums[mid] > x)
```

Store answer and move left:

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

Function call:

```
sol.upperBound(arr,x);
```

Output:

```
Upper bound index: 3
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
| 0    | 3 | 1   | 2        | move right         |
| 2    | 3 | 2   | 2        | move right         |
| 3    | 3 | 3   | 3        | store 3, move left |
| stop |   |     |          | return 3           |

---

## Edge Cases

### Case 1

```
arr = [1,2,3,4]
x = 2
```

Output:

```
2
```

### Case 2

```
arr = [1,1,1,1]
x = 1
```

Output:

```
4
```

### Case 3

```
arr = [5,6,7]
x = 1
```

Output:

```
0
```

---

## Lower Bound vs Upper Bound

| Type        | Condition         |
| ----------- | ----------------- |
| Lower Bound | first element ≥ x |
| Upper Bound | first element > x |

---

## Output

```
Upper bound index: 3
```
