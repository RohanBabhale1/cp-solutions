# 2272C · Yet Another Black Cell Problem

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2272/problem/C)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 62 ms | 1636 KB ⇪ sync | 2026-10-26 | [link](https://codeforces.com/contest/2272/submission/396130379) |

## Problem

Inspired by [this problem](https://codeforces.com/contest/2026/problem/B).

There is a strip divided into cells numbered from $$$0$$$ to $$$10^9$$$ from left to right. Initially, all cells are white.

An array $$$a$$$ of length $$$n$$$ is given, containing the indices of $$$n$$$ cells. We want to paint all these $$$n$$$ cells black.

Given an integer $$$x$$$, you may choose an integer $$$y$$$ such that $$$0 \le y \le x$$$, and then arbitrarily select $$$y$$$ cells that are not in $$$a$$$. We also want to paint these selected $$$y$$$ cells black while keeping all non-selected cells white.

You may perform the following operation any number of times:

 - Choose two distinct cells $$$i$$$ and $$$j$$$ such that $$$1 \le |i-j| \le k$$$, and paint them black, regardless of whether they were originally black or white.

Find the minimum value of $$$k$$$ for which it is possible to paint all the required cells black while keeping other cells white.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

The first line of each test case contains two integers $$$n$$$ and $$$x$$$ ($$$2\leq n\leq 2\cdot 10^5,0\leq x\leq n$$$).

The second line contains $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ ($$$0\leq a_i\leq 10^{9}$$$). It is guaranteed that $$$a_i \lt a_{i+1}$$$ for all $$$1 \leq i  \lt  n$$$.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.

### Output

For each test case, print a single integer — the minimum value of $$$k$$$ for which it is possible to paint all the required cells black while keeping other cells white.

### Example

Input

```
42 01 32 11 33 12 5 710 20 6 8 10 13 14 16 19 25 31
```

Output

```
2123
```

### Note

In the first example, we cannot paint any cell other than $$$1$$$ and $$$3$$$ black because $$$x=0$$$. So it's optimal to set $$$k=2$$$ and choose $$$i=1,j=3$$$ in the first operation.

In the second example, we can set $$$k=1$$$, which is the minimal available value. We first choose $$$i=1,j=2$$$ to paint and then choose $$$i=2,j=3$$$ to paint. After that, cells $$$1,2,3$$$ are painted black, only cell $$$2$$$ is not in the given list, which satisfies the condition $$$x=1$$$.
