# 2277B · Sequence Decreasing

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2277/problem/B)

**Topics:** `constructive algorithms` `greedy`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 62 ms | 0 KB ⇪ sync | 2026-10-26 | [link](https://codeforces.com#) |

## Problem

[Gracie Abrams - That's So True](https://open.spotify.com/track/7ne4VBA60CxGM75vw0EYad)

An array $$$b$$$ of non-negative integers is called good if it can be turned into a non-empty array consisting only of zeros by performing the following operation any number of times (possibly zero):

 - choose a non-empty subarray$$$^{\text{∗}}$$$ of $$$b$$$ in which all elements are positive;
- decrease each element of this subarray by $$$1$$$;
- choose one element of this subarray and remove it from $$$b$$$, without changing the order of the remaining elements.

You are given an array $$$a$$$ of $$$n$$$ non-negative integers. Find the maximum length of a good subsequence$$$^{\text{†}}$$$ of $$$a$$$, or report that $$$a$$$ has no good subsequence.

$$$^{\text{∗}}$$$An array $$$c$$$ is a subarray of an array $$$b$$$ if $$$c$$$ can be obtained from $$$b$$$ by the deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

$$$^{\text{†}}$$$A sequence $$$c$$$ is a subsequence of a sequence $$$a$$$ if $$$c$$$ can be obtained from $$$a$$$ by the deletion of several (possibly, zero or all) elements from arbitrary positions.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the length of the array $$$a$$$.

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$) — the elements of the array $$$a$$$.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

### Output

For each test case, output a single integer — the maximum length of a good subsequence of $$$a$$$, or $$$0$$$ if no such subsequence exists.

### Example

Input

```
4101135 3 452 1 1 0 3
```

Output

```
1005
```

### Note

In the first test case, the array $$$a$$$ itself is good, since it is non-empty and consists only of zeros. Thus, the answer is $$$1$$$.

In the second test case, it can be shown that $$$a$$$ has no good subsequence. Thus, the answer is $$$0$$$.
