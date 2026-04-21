# First and Last Occurrence using Binary Search – C++ README

## Overview

This program finds the **first occurrence** and **last occurrence** of a target element in a sorted array using **Binary Search**.

* First Occurrence → first index of target
* Last Occurrence → last index of target
* If element not found → return {-1, -1}

---

## Example

Input:

```
arr = [1,2,2,2,3,4]
target = 2
```

Output:

```
First Occurrence: 1
Last Occurrence: 3
```

---

## Approach

1. Use binary search to find first occurrence
2. When target found → move left
3. Use binary search to find last occurrence
4. When target found → move right
5. Return both indices

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

## Functions

### firstOccurrence

Returns first index of target

### lastOccurrence

Returns last index of target

### searchRange

Returns both indices

```
{first , last}
```

---

## Example Walkthrough

Array:

```
[1,2,2,2,3,4]
```

Target:

```
2
```

First occurrence search:

```
index = 1
```

Last occurrence search:

```
index = 3
```

Return:

```
{1,3}
```

---

## Edge Cases

Case 1

```
arr = [1,1,1,1]
target = 1
output = {0,3}
```

Case 2

```
arr = [1,2,3,4]
target = 5
output = {-1,-1}
```

Case 3

```
arr = [2]
target = 2
output = {0,0}
```

---

## Output

```
First Occurrence: 1
Last Occurrence: 3
```
