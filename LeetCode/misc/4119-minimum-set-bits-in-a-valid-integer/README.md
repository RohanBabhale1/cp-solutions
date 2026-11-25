# 4119 · Minimum Set Bits in a Valid Integer

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Hard &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/minimum-set-bits-in-a-valid-integer/)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [Go](./solution.go) | 885 ms | 11.2 MB | 2026-11-25 | [link](https://leetcode.com/submissions/detail/2203046771/) |

## Problem

You are given an integer array `nums` of length `n` and an integer `k`.

Let `x_1, x_2, ..., x_n-k+1` denote the **bitwise AND** of each **subarray** of length `k` in `nums`, in order from left to right.

A positive integer `y` is called **valid** if `(y & x_i) != 0` for every `1 <= i <= n - k + 1`.

Return the **minimum** number of **set bits** in any **valid** integer `y`. If no valid integer exists, return -1.

**Example 1:**

**Input:** nums = [6,7,3], k = 2

**Output:** 1

**Explanation:**

	- The two subarrays of length `k = 2` are `[6, 7]` and `[7, 3]`.

	- Their bitwise ANDs are `x_1 = 6 & 7 = 6` and `x_2 = 7 & 3 = 3`.

	- `y = 2` is valid, since `2 & 6 = 2` and `2 & 3 = 2`, both non-zero.

	- `y = 2` has 1 set bit (`"010"`), so the answer is 1.

**Example 2:**

**Input:** nums = [3,5,12], k = 1

**Output:** 2

**Explanation:**

	- Since `k = 1`, each subarray has one element, so `x_1 = 3`, `x_2 = 5`, and `x_3 = 12`.

	- `y = 9` is valid, since `9 & 3 = 1`, `9 & 5 = 1`, and `9 & 12 = 8`, all non-zero.

	- `y = 9` has 2 set bits (`"1001"`), so the answer is 2.

**Example 3:**

**Input:** nums = [2,1], k = 2

**Output:** -1

**Explanation:**

	- The only subarray of length `k = 2` is `[2, 1]`, with bitwise AND `x_1 = 2 & 1 = 0`.

	- Since `x_1 = 0`, no `y` is valid. Thus, the answer is -1.

**Constraints:**

	- `1 <= n == nums.length <= 10^5`

	- `1 <= k <= n`

	- `0 <= nums[i] <= 10^5`
