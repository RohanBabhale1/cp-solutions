# 0010 · Regular Expression Matching

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Hard &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/regular-expression-matching/)

**Topics:** `String` `Dynamic Programming` `Recursion`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 3 ms | 9.4 MB | 2026-11-19 | [link](https://leetcode.com/submissions/detail/2199534174/) |

## Problem

Given an input string `s` and a pattern `p`, implement regular expression matching with support for `'.'` and `'*'` where:

	- `'.'` Matches any single character.​​​​

	- `'*'` Matches zero or more of the preceding element.

Return a boolean indicating whether the matching covers the entire input string (not partial).

**Example 1:**

```
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
```

**Example 2:**

```
Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
```

**Example 3:**

```
Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".
```

**Constraints:**

	- `1 <= s.length <= 20`

	- `1 <= p.length <= 20`

	- `s` contains only lowercase English letters.

	- `p` contains only lowercase English letters, `'.'`, and `'*'`.

	- It is guaranteed for each appearance of the character `'*'`, there will be a previous valid character to match.
