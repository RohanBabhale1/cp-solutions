# 2290F · Value Counters

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2290/problem/F)

**Topics:** `binary search` `constructive algorithms` `math`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 78 ms | 800 KB | 2026-11-12 | [link](https://codeforces.com/contest/2290/submission/398285943) |

## Problem

For a permutation$$$^{\text{∗}}$$$ $$$p$$$ of length $$$n$$$, an array $$$b_1, b_2, \ldots, b_n$$$ is defined as follows:

Initially, all elements of $$$b$$$ are equal to $$$0$$$. Then, consider every pair $$$(x, y)$$$ such that $$$1 \le x  \lt  y \le n$$$ and $$$x$$$ appears to the left of $$$y$$$ in $$$p$$$. For each such pair:

 - $$$b_x$$$ is decreased by $$$1$$$;
- $$$b_y$$$ is increased by $$$1$$$.

Note that the array $$$b$$$ is indexed by the values of the elements, not by their positions: $$$b_x$$$ is the counter of the number $$$x$$$, wherever it is located in $$$p$$$. For example, for $$$p = [2, 1, 3]$$$, the pairs are $$$(1, 3)$$$ and $$$(2, 3)$$$, so $$$b = [-1, -1, 2]$$$.

You are given $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$. Find a permutation $$$p$$$ that gives this array, or report that there is no such permutation.

$$$^{\text{∗}}$$$A permutation of length $$$n$$$ is an array consisting of $$$n$$$ distinct integers from $$$1$$$ to $$$n$$$ in arbitrary order. For example, $$$[2,3,1,5,4]$$$ is a permutation, but $$$[1,2,2]$$$ is not a permutation ($$$2$$$ appears twice in the array), and $$$[1,3,4]$$$ is also not a permutation ($$$n=3$$$ but there is $$$4$$$ in the array).

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2\cdot 10^5$$$) — the length of the permutation.

The second line of each test case contains $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ ($$$-n \le b_x \le n$$$) — the given array.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.

### Output

For each test case, print $$$-1$$$ if there is no such permutation. Otherwise, print $$$n$$$ integers $$$p_1, p_2, \ldots, p_n$$$.

It can be shown that if such a permutation exists, it is unique.

### Example

Input

```
530 -1 11021 14-2 1 -1 23-1 0 1
```

Output

```
2 3 11-13 1 4 2-1
```

### Note

In the first test case, $$$p = [2, 3, 1]$$$. The only pair of values $$$x  \lt  y$$$ such that $$$x$$$ is to the left of $$$y$$$ is $$$x = 2$$$, $$$y = 3$$$. Therefore, $$$b_1 = 0$$$, $$$b_2 = -1$$$, and $$$b_3 = 1$$$. Here $$$b_1$$$ corresponds to the value $$$1$$$, which is the last element of $$$p$$$.

In the third test case, the permutation $$$[1, 2]$$$ gives $$$b_1 = -1$$$, $$$b_2 = 1$$$, and the permutation $$$[2, 1]$$$ gives $$$b_1 = 0$$$, $$$b_2 = 0$$$. So no permutation gives $$$b_1 = 1$$$, $$$b_2 = 1$$$.

In the fourth test case, $$$p = [3, 1, 4, 2]$$$. The pairs of values $$$x  \lt  y$$$ such that $$$x$$$ is to the left of $$$y$$$ are $$$(1, 2)$$$, $$$(1, 4)$$$, and $$$(3, 4)$$$. Therefore, $$$b_1 = -2$$$, $$$b_2 = 1$$$, $$$b_3 = -1$$$, and $$$b_4 = 2$$$.
