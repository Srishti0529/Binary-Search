# 📘 Nth Root of a Number (Binary Search on Answer)

## 📌 Problem Statement

Given two integers `N` and `M`, find the **integer Nth root of M**, i.e., a number `x` such that:

x^N = M

If no such integer exists, return `-1`.

---

## 💡 Approach

Use **Binary Search on Answer**.

We search for a number `x` in the range:

* low = 1
* high = M

---

## 🔹 Key Idea

Instead of directly computing `mid^N` (which can overflow), we use **Exponentiation by Squaring**.

The helper logic:

* Return `1` → if mid^N == M
* Return `0` → if mid^N < M
* Return `2` → if mid^N > M (early stop to avoid overflow)

---

## 🔹 Binary Search Logic

1. Compute `mid = (low + high) / 2`
2. Evaluate `mid^N` using helper:

   * If equal → return `mid`
   * If smaller → search right (`low = mid + 1`)
   * If greater → search left (`high = mid - 1`)

---

## 🧠 Intuition

* If `mid^N < M` → need a **larger value**
* If `mid^N > M` → need a **smaller value**
* Goal is to find the **exact integer root**

---

## ⚡ Optimization

* Use exponentiation by squaring
* Stop early if value exceeds `M`

---

## ⏱️ Complexity

* Time: O(log M * log N)
* Space: O(1)

---

## 📌 Example

Input:
N = 3, M = 27

Output:
3

---

## 🔥 Key Points

* Binary search on answer, not array
* Avoid overflow using optimized power calculation
* Early exit improves performance
* Return exact root or `-1`
