# 2284A2 · 15K4JR3B (Hard Version)

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2284/problem/A2)

**Topics:** `greedy` `math` `number theory`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 46 ms | 0 KB ⇪ sync | 2026-11-12 | [link](https://codeforces.com/contest/2284/submission/397596087) |

## Problem

— Did you know if you connect Park Kultury, a point not in the northeast, and one more on a map, you'll look like an idiot?

— No, I did not know that. Is that true?

This is the hard version of the problem. The difference between the versions is that in this version, in one operation, a point coordinate changes by a power of two.

Unemployed $$$\ast$$$ Angel places three points $$$A$$$, $$$B$$$, and $$$C$$$ at the origin, and also gives you an array $$$a$$$ of length $$$n$$$.

You must perform exactly $$$n$$$ operations. During the $$$i$$$-th operation, choose one of these points and increase or decrease one of its coordinates by $$$2^{a_i}$$$. In other words, if the chosen point has coordinates $$$(x, y)$$$, then in the $$$i$$$-th operation you may move it to $$$(x + 2^{a_i}, y)$$$, $$$(x - 2^{a_i}, y)$$$, $$$(x, y + 2^{a_i})$$$, or $$$(x, y - 2^{a_i})$$$.

Unemployed $$$\ast$$$ Angel asks you to find the maximum doubled area of triangle $$$ABC$$$ after all operations are performed. As she is your idol, you cannot refuse her.

Since Unemployed $$$\ast$$$ Angel is very smart, she can show that the value of interest is always an integer.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). The description of the test cases follows.

The first line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 100$$$) — the length of array $$$a$$$ and the number of operations.

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 24$$$) — the elements of array $$$a$$$.

### Output

For each test case, output one integer — the maximum doubled area of triangle $$$ABC$$$.

### Example

Input

```
420 030 0 160 1 2 2 4 0624 24 24 0 0 0
```

Output

```
14192562950054084608
```

### Note

In the first test case, increase the $$$x$$$-coordinate of $$$B$$$ by $$$2^0$$$, then increase the $$$y$$$-coordinate of $$$C$$$ by $$$2^0$$$. After these $$$2$$$ operations, the points are $$$A = (0, 0)$$$, $$$B = (1, 0)$$$, and $$$C = (0, 1)$$$. The doubled area of the resulting triangle is $$$1$$$.

                  ![](https://espresso.codeforces.com/4c998241d39e82fe3e7ba23c6fb235198519aff8.png)

In the second test case, decrease the $$$x$$$-coordinate of $$$A$$$ by $$$2^0$$$, then increase the $$$x$$$-coordinate of $$$B$$$ by $$$2^0$$$, and finally increase the $$$y$$$-coordinate of $$$C$$$ by $$$2^1$$$. After these $$$3$$$ operations, the points are $$$A = (-1, 0)$$$, $$$B = (1, 0)$$$, and $$$C = (0, 2)$$$. The doubled area of the resulting triangle is $$$4$$$.

                  ![](https://espresso.codeforces.com/1f670c55c904cd55b57b0a59cc94167c695b153f.png)
