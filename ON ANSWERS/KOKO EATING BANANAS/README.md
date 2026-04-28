# 📘 Koko Eating Bananas (Binary Search on Answer)

## 📌 Problem Statement

A monkey is given an array `nums` where each element represents a pile of bananas.
An integer `h` represents the total hours available.

Each hour:

* The monkey chooses one pile
* Eats `k` bananas from it
* If the pile has fewer than `k`, it eats all of them

👉 Find the **minimum value of `k` (bananas/hour)** such that all bananas are eaten within `h` hours.

---

## 💡 Approach

Use **Binary Search on Answer (k = eating speed)**.

### 🔹 Search Space

* Minimum speed = `1`
* Maximum speed = `max(nums)`

---

## 🔹 Key Idea

For a given speed `k`, calculate total hours required:

hours += ceil(nums[i] / k)

Use integer formula:
hours += (nums[i] + k - 1) / k

---

## 🔹 Binary Search Logic

1. Compute `mid = (low + high) / 2` → candidate speed
2. Calculate total hours required

* If hours ≤ h → valid speed → try smaller (`high = mid - 1`)
* If hours > h → too slow → increase speed (`low = mid + 1`)

---

## 🧠 Intuition

* Smaller `k` → more hours needed ❌
* Larger `k` → fewer hours needed ✅
* Find the **minimum valid speed**

---

## 🔁 Why return `low (s)`?

At the end:

* `low` points to the **smallest valid speed**
* `high` points to last invalid

👉 So answer = `low`

---

## ⚠️ Important Points

* Use `long long` for total hours (avoid overflow)
* Avoid floating `ceil`, use integer formula
* Do NOT sort the array

---

## ⏱️ Complexity

* Time: O(n * log(max(nums)))
* Space: O(1)

---

## 📌 Example

Input:
nums = [3,6,7,11], h = 8

Output:
4

---

## 🔥 Key Takeaways

* Binary search on answer (not array)
* `mid` represents eating speed
* Move left for valid, right for invalid
* Return smallest valid value (`low`)
