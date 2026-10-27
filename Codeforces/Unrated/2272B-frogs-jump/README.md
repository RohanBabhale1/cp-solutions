# 2272B · Frogs Jump

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2272/problem/B)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 31 ms | 16 KB ⇪ sync | 2026-10-26 | [link](https://codeforces.com/contest/2272/submission/396126634) |

## Problem

Given a $$$2 \times n$$$ grid, each cell of the grid is either empty or contains one frog. It is guaranteed that each column of the input grid contains at least one frog. You can choose $$$k$$$ frogs and remove them from the grid. After this, all remaining frogs will jump.

Each frog can jump up, down, left, or right by $$$1$$$ cell, but cannot jump outside the grid. All frogs must choose a legal direction and jump simultaneously exactly once. After jumping, the number of frogs in each row and each column of the grid must remain unchanged.

Note that:

 - Even if two frogs' jump directions conflict, they can still jump to their respective target cells.
- Multiple frogs are allowed to jump to the same cell, because a cell can hold arbitrarily many frogs.

Find the minimum $$$k$$$ such that there exists a valid jumping scheme.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

For each test case, the first line contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$), where $$$n$$$ is the number of columns in the grid.

The next two lines each contain a string of length $$$n$$$; we use the character $$$\texttt{f}$$$ to represent a cell containing a frog, and the character $$$\texttt{o}$$$ to represent an empty cell.

It is guaranteed that each column of the input grid contains at least one frog.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

### Output

For each test case, output a single line containing the minimum $$$k$$$ such that there exists a valid jumping scheme.

### Example

Input

```
42ffoo2foof3fofofo1fo
```

Output

```
0011
```

### Note

In the first test case, two frogs can jump to each other's cells.

In the second test case, the left frog can jump down, and the right frog can jump up. After the jumps, the total number of frogs in each row and each column remains $$$1$$$.

offo

In the third test case, three frogs can all jump to the same cell $$$(1,2)$$$, although it is not a valid answer, since the number of frogs in the first column changes from $$$1$$$ to $$$0$$$.

of f foooo
