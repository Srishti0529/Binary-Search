# Floor and Ceil using Binary Search – C++ README

## Overview

This program finds the **Floor** and **Ceil** of a given number `x` in a sorted array using **Binary Search**.

* **Floor** → Greatest element less than or equal to `x`
* **Ceil** → Smallest element greater than or equal to `x`

If floor or ceil does not exist, return **-1**.

---

## Example

Input:

```
arr = [1, 2, 4, 6, 10]
x = 5
```

Output:

```
Floor: 4
Ceil: 6
```

---

## Approach

1. Use binary search on sorted array
2. If element equals x → return `{x, x}`
3. If element greater than x → update ceil and move left
4. If element smaller than x → update floor and move right
5. If not found, return stored floor and ceil

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
vector<int> getFloorAndCeil(vector<int> nums, int x)
```

### Returns

```
{floor, ceil}
```

---

## Example Walkthrough

Array:

```
[1,2,4,6,10]
```

x = 5

| s | e | mid | nums[mid] | floor | ceil |
| - | - | --- | --------- | ----- | ---- |
| 0 | 4 | 2   | 4         | 4     | -    |
| 3 | 4 | 3   | 6         | 4     | 6    |

Return:

```
{4,6}
```

---

## Edge Cases

Case 1

```
arr = [2,4,6]
x = 1
output = {-1,2}
```

Case 2

```
arr = [2,4,6]
x = 10
output = {6,-1}
```

Case 3

```
arr = [1,2,3]
x = 2
output = {2,2}
```

---

## Output

```
Floor: 4
Ceil: 6
```
