# 2284A1 · 15K4JR3B (Easy Version)

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2284/problem/A1)

**Topics:** `greedy` `math` `number theory`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 31 ms | 0 KB ⇪ sync | 2026-11-12 | [link](https://codeforces.com/contest/2284/submission/397592185) |

## Problem

— Did you know if you connect Park Kultury, a point not in the northeast, and one more on a map, you'll look like an idiot?

— No, I did not know that. Is that true?

This is the easy version of the problem. The difference between the versions is that in this version, in one operation, the coordinate of a point changes by exactly $$$1$$$.

Unemployed $$$\ast$$$ Angel places three points $$$A$$$, $$$B$$$, and $$$C$$$ at the origin.

You must perform exactly $$$n$$$ operations of the following type: choose one of these points and increase or decrease one of its coordinates by $$$1$$$. In other words, if the chosen point has coordinates $$$(x, y)$$$, in one operation you may move it to $$$(x + 1, y)$$$, $$$(x - 1, y)$$$, $$$(x, y + 1)$$$, or $$$(x, y - 1)$$$.

Unemployed $$$\ast$$$ Angel asks you to find the maximum doubled area of triangle $$$ABC$$$ after all operations are performed. As she is your idol, you cannot refuse her.

Since Unemployed $$$\ast$$$ Angel is very smart, she can show that the value of interest is always an integer.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.

The only line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 1000$$$) — the number of operations.

### Output

For each test case, output one integer — the maximum doubled area of triangle $$$ABC$$$.

### Example

Input

```
5251543769
```

Output

```
1656462147840
```

### Note

In the first test case, increase the $$$x$$$-coordinate of $$$B$$$ by $$$1$$$, then increase the $$$y$$$-coordinate of $$$C$$$ by $$$1$$$. After these $$$2$$$ operations, the points are $$$A = (0, 0)$$$, $$$B = (1, 0)$$$, and $$$C = (0, 1)$$$. The doubled area of the resulting triangle is $$$1$$$.

                  ![](https://espresso.codeforces.com/4c998241d39e82fe3e7ba23c6fb235198519aff8.png)

In the second test case, decrease the $$$x$$$-coordinate of $$$A$$$ by $$$1$$$, then increase the $$$x$$$-coordinate of $$$B$$$ by $$$1$$$ twice, and finally increase the $$$y$$$-coordinate of $$$C$$$ by $$$1$$$ twice. After these $$$5$$$ operations, the points are $$$A = (-1, 0)$$$, $$$B = (2, 0)$$$, and $$$C = (0, 2)$$$. The doubled area of the resulting triangle is $$$6$$$.

                  ![](https://espresso.codeforces.com/90659838f1746dfc778471ce3755f50d51ad0661.png)
