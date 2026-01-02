# 🧠 LeetCode Problem Solving (C Language)

This repository contains my **LeetCode problem-solving journey using C**, where I focus on **understanding the problem deeply**, writing **efficient solutions** & applying **core Data Structures & Algorithms concepts**.

My goal is not only to solve problems but to **document my journey & explain my thinking clearly**, so that everyone can easily understand how I approach problems.

---

## 📌 What This Repository Shows

- Strong fundamentals in **arrays, pointers & memory handling**
- Ability to write **optimized solutions** (O(n), O(1) space)
- Clear **problem breakdown & approach explanation**
- Code written with **readability & correctness**
- Growth mindset - problems added gradually with explanations

---

## 🛠️ Language Used
- **C (ANSI C)**

---

## 🧩 Problems Solved So Far

> 🔢 Total Problems Solved: **11 & counting**  
> 🚀 This README currently documents **Problem #11**, solved today.

---

# ✅ Problem #9: Merge Sorted Array

### 🔹 Problem Summary
You are given two sorted arrays:
- `nums1` with size `m + n` (first `m` elements are valid)
- `nums2` with size `n`

The task is to **merge `nums2` into `nums1` in place**, so that `nums1` becomes a single sorted array.

---

### 💡 Key Constraints & Observations
- Both arrays are **already sorted**
- `nums1` has **extra space at the end**
- We must **not use extra memory**
- Time complexity should be **O(m + n)**

---

### 🧠 My Approach

Instead of merging from the front (which risks overwriting values),  
I merge **from the back** using **three pointers**:

- `i` → last valid element of `nums1`
- `j` → last element of `nums2`
- `k` → last index of `nums1`

At each step:
- Compare `nums1[i]` and `nums2[j]`
- Place the larger value at `nums1[k]`
- Move pointers accordingly

This ensures:
- No data loss
- In-place merge
- Optimal performance

---

### ⏱ Complexity
- **Time:** `O(m + n)`
- **Space:** `O(1)`

---

### 🧪 Example
```yaml
Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3

Output:
[1,2,2,3,5,6]
```
---

# ✅ Problem #10: Remove Element

### 🔹 Problem Summary
Given an array `nums` & a value `val`, remove all occurrences of `val` **in-place** & return the number of remaining elements (`k`).

The order of elements **does not matter**.

---

### 💡 Key Constraints & Observations
- Must modify the array **in-place**
- No new array allowed
- Only the **first `k` elements matter**
- Remaining elements can be ignored

---

### 🧠 My Approach (Two-Pointer Technique)

I use:
- One pointer to **scan** the array
- One pointer to **overwrite valid elements**

Steps:
1. Traverse the array
2. If the current element is **not equal to `val`**, place it at the front
3. Increase the count of valid elements

This avoids unnecessary shifting & keeps the solution simple and efficient.

---

### ⏱ Complexity
- **Time:** `O(n)`
- **Space:** `O(1)`

---

### 🧪 Example
```yaml
Input:
nums = [3,2,2,3], val = 3

Output:
k = 2
nums = [2,2,,]
```
---

# ✅ Problem #11: Remove Duplicates from Sorted Array

### 🔹 Problem Summary
You are given a **sorted integer array** `nums`.  
Your task is to **remove duplicate elements in-place** such that each unique element appears **only once**, while keeping the **relative order** the same.

After removing duplicates:
- Return `k` = number of unique elements
- The **first `k` elements** of `nums` must contain the unique values in sorted order
- Elements beyond index `k - 1` can be ignored

---

### 💡 Key Constraints & Observations
- The array is **already sorted**
- Duplicates always appear **next to each other**
- No extra array is allowed (in-place modification)
- Order **must be preserved**

---

### 🧠 My Approach (Two-Pointer Technique)

Since the array is sorted, I take advantage of this property.

I use:
- One pointer to **track the position of the last unique element**
- One pointer to **scan the array**

Steps:
1. Start from the second element
2. Compare current element with the last unique element
3. If different:
   - Move it forward to the next unique position
4. Increase the count of unique elements

This ensures:
- No extra memory usage
- Stable order
- Efficient traversal

---

### ⏱ Complexity
- **Time:** `O(n)`
- **Space:** `O(1)` (in-place)

---

### 🧪 Example 1
```yaml
Input:
nums = [1,1,2]

Output:
k = 2
nums = [1,2,_]
```
---
### 🧪 Example 2
```yaml
Input:
nums = [0,0,1,1,1,2,2,3,3,4]

Output:
k = 5
nums = [0,1,2,3,4,,,,,_]
```
---

### 🎯 Key Takeaway
This problem demonstrates how recognizing **sorted data** allows us to:
- Avoid unnecessary comparisons
- Use efficient pointer-based solutions
- Write clean, optimal in-place algorithms

It reinforces strong fundamentals in **array traversal, pointer logic & algorithmic optimization**.

---

## 🎯 Why This Repository Matters

This repository demonstrates:
- Strong understanding of **low-level array manipulation**
- Comfort with **pointers and memory**
- Ability to **optimize solutions**
- Clear explanation skills (important for teamwork & interviews)

---

## 🚀 What’s Next
- More LeetCode problems will be added gradually
- Focus areas:
  - Two pointers
  - Arrays
  - Strings
  - Searching & sorting
  - Basic algorithm patterns

---

## 👋 About Me
I am a **CSE undergraduate** actively strengthening my **problem-solving & algorithmic thinking**, aiming for **software engineering & backend roles**.

📌 I believe **clean thinking + clear explanation = good engineering**.

# Thanks for checking out my work!


