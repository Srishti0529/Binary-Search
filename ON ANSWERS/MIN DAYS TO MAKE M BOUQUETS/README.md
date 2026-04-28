# 📘 Rose Garden (Minimum Days to Make Bouquets)

## 📌 Problem Statement

You are given an array `nums` where each element represents the **day a flower blooms**.

You need to make:

* `m` bouquets
* Each bouquet requires `k` **adjacent flowers**

👉 Find the **minimum number of days** required to make all bouquets.
If it is not possible, return `-1`.

---

## 💡 Approach

Use **Binary Search on Answer (days)**.

---

## 🔹 Search Space

* Minimum days = `min(nums)`
* Maximum days = `max(nums)`

---

## 🔹 Key Idea

For a given number of days `d`:

* Count how many flowers have bloomed (`nums[i] ≤ d`)
* Form bouquets using **k consecutive bloomed flowers**

---

## 🔹 Helper Logic

1. Traverse the array
2. Count consecutive bloomed flowers
3. Every `k` flowers → form 1 bouquet
4. Reset count when a flower is not bloomed

👉 Return true if total bouquets ≥ `m`

---

## 🔹 Binary Search Logic

1. Compute `mid = (low + high) / 2` → candidate days
2. Check if possible to form `m` bouquets

* If possible → try smaller days (`high = mid - 1`)
* If not possible → increase days (`low = mid + 1`)

---

## 🧠 Intuition

* Smaller days → fewer flowers bloom ❌
* Larger days → more flowers bloom ✅
* Find the **minimum days** where requirement is satisfied

---

## 🔁 Why return answer?

We store the latest valid `mid` (possible days).
This ensures we return the **minimum valid day**.

---

## ⚠️ Important Checks

* If `m * k > n` → not possible → return `-1`
* No need to sort the array
* Maintain consecutive count carefully

---

## ⏱️ Complexity

* Time: O(n * log(max(nums)))
* Space: O(1)

---

## 📌 Example

Input:
nums = [1,10,3,10,2], m = 3, k = 1

Output:
3

---

## 🔥 Key Takeaways

* Binary search on days (answer space)
* Check feasibility using helper function
* Move left when possible, right when not
* Same pattern as Koko, Smallest Divisor, etc.
