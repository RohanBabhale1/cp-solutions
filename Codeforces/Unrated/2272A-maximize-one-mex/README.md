# 2272A · Maximize One MEX

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2272/problem/A)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 31 ms | 20 KB ⇪ sync | 2026-10-26 | [link](https://codeforces.com/contest/2272/submission/396122885) |

## Problem

Given an array $$$a$$$ of length $$$n$$$, which is a permutation of the integers $$$0,1,\ldots,n-1$$$, you can perform the following operation at most once:

 - Choose two distinct indices $$$i$$$ and $$$j$$$ ($$$i \ne j$$$), and swap the values of $$$a_i$$$ and $$$a_j$$$.

After performing the operation, define $$$f_i=\operatorname{mex}(a_1, a_2, \ldots, a_i)$$$. $$$\operatorname{mex}(c)$$$ denotes the minimum excluded (MEX)$$$^{\text{∗}}$$$ of the collection $$$c$$$.

Given an integer $$$k$$$, find two indices to use in the operation above so as to maximize the $$$k$$$-th largest value among $$$f_1, f_2, \ldots, f_n$$$. If no operation is needed, output $$$-1$$$.

If there are several valid answers, you may output any of them.

$$$^{\text{∗}}$$$The minimum excluded (MEX) of a collection of integers $$$c_1, c_2, \ldots, c_k$$$ is defined as the smallest non-negative integer $$$x$$$ which does not occur in the collection $$$c$$$.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 50$$$). The description of the test cases follows.

For each test case, the first line contains two integers $$$n$$$ and $$$k$$$ ($$$2 \le n \le 100$$$, $$$1 \le k \le n$$$), where $$$n$$$ is the number of elements in the array $$$a$$$ and $$$k$$$ is the rank of the value to be maximized (with $$$k=1$$$ corresponding to the largest value).

The next line contains $$$n$$$ integers: $$$a_1,a_2,\ldots,a_n$$$. It is guaranteed that each of the values $$$0,1,\ldots,n−1$$$ appears exactly once in the array $$$a$$$.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$100$$$.

### Output

For each test case, output a single line that contains two indices used in the operation to maximize the $$$k$$$-th largest value among $$$f_1, f_2, \ldots, f_n$$$. If no operation is needed, output $$$-1$$$.

### Example

Input

```
35 10 1 2 3 43 22 0 15 20 2 1 4 3
```

Output

```
-11 34 5
```

### Note

In the first test case, no operation is needed; the $$$1$$$st largest value among $$$f_1, f_2, \ldots, f_5$$$ is $$$f_5=5$$$. Actually, if we perform the swap operation, no matter which two indices we choose, $$$f_5$$$ is always the largest one, with value $$$5$$$.

In the second test case, after swapping $$$a_1$$$ and $$$a_3$$$, we get the array $$$[1,0,2]$$$, and $$$f_1=0, f_2=2, f_3=3$$$; the $$$2$$$nd largest value among $$$f_1, f_2, f_3$$$ is $$$f_2=2$$$.
