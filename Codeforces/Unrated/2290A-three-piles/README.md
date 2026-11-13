# 2290A · Three Piles

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2290/problem/A)

**Topics:** `implementation` `math`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 0 ms | 0 KB ⇪ sync | 2026-11-13 | [link](https://codeforces.com/contest/2290/submission/398244409) |

## Problem

There are three piles of stones. The first pile contains $$$a$$$ stones, the second pile contains $$$b$$$ stones, and the third pile contains $$$c$$$ stones.

You must make exactly one move: take one stone from one of the piles and put it on one of the other two piles. You cannot skip this move, and you cannot make more than one move.

Determine whether you can make this move so that all three piles contain the same number of stones.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.

The only line of each test case contains three integers $$$a$$$, $$$b$$$, and $$$c$$$ ($$$1 \le a \le b \le c \le 10$$$) — the numbers of stones in the first, second, and third piles.

### Output

For each test case, print "YES" if you can make the move so that all three piles contain the same number of stones, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

### Example

Input

```
61 2 32 2 23 4 51 1 48 9 103 5 7
```

Output

```
YESNOYESNOYESNO
```

### Note

In the first test case, you can take a stone from the third pile and put it on the first pile. Then each pile contains $$$2$$$ stones.

In the second test case, all piles already contain the same number of stones. However, a move is mandatory, and after any move the piles no longer contain the same number of stones.

In the fourth test case, two moves would be enough to make each pile contain $$$2$$$ stones, but only one move is allowed. After any single move, the piles do not contain the same number of stones.
