# 2278C · Math and Physics

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2278/problem/C)

**Topics:** `greedy`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 46 ms | 800 KB ⇪ sync | 2026-11-01 | [link](https://codeforces.com/contest/2278/submission/396822791) |

## Problem

There are $$$n$$$ nuclear cores arranged in a line, numbered from $$$1$$$ to $$$n$$$ from left to right. The $$$i$$$-th core has an initial mass of $$$a_i$$$.

In one operation, you can choose a core $$$i$$$ ($$$1 \le i \le k$$$, where $$$k$$$ is the current number of cores) such that its mass $$$a_i \ge 2$$$. You then split it into two positive integer parts $$$x$$$ and $$$y$$$ such that $$$x \ge 1$$$, $$$y \ge 1$$$, and $$$x + y = a_i$$$.

After splitting, the $$$i$$$-th core is removed from the sequence, decreasing the total number of cores by $$$1$$$. The mass $$$x$$$ is added to the left neighbor of the removed core, if it exists. The mass $$$y$$$ is added to the right neighbor of the removed core, if it exists. If a neighbor does not exist, the corresponding mass is lost to the environment.

The sequence immediately shifts to close the gap. The process stops when no further operations can be performed.

Determine whether it is possible to end the process with exactly one core remaining. If it is possible, find the maximum possible mass of this single final core.

### Input

The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of each test case follows.

The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the initial number of nuclear cores.

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 1000$$$) — the initial masses of the cores.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

### Output

For each test case, print a single integer — the maximum possible mass of the final remaining core. If it is impossible to end up with exactly one core, print $$$-1$$$ instead.

### Example

Input

```
341 2 3 451 1 1 1 126 7
```

Output

```
9-112
```

### Note

Consider the first test case. The initial sequence is $$$[1, 2, 3, 4]$$$. An optimal sequence of operations is:

 - Split the $$$2$$$ into $$$x = 1$$$, $$$y = 1$$$: the sequence becomes $$$[1 + 1, 3 + 1, 4] = [2, 4, 4]$$$.
- Split the first $$$4$$$ into $$$x = 1$$$, $$$y = 3$$$: the sequence becomes $$$[2 + 1, 4 + 3] = [3, 7]$$$.
- Split the $$$3$$$ into $$$x=1, y=2$$$. The $$$1$$$ is permanently lost to the left, and the $$$2$$$ is added to the right core. The final sequence is $$$[7 + 2] = [9]$$$.

Now, exactly one core is left, and it has a mass of $$$9$$$. It can be shown that this is the maximum possible.

For the second test case, no operation can be performed, and thus, it is impossible to end up with a single core remaining. Hence, output $$$-1$$$.
