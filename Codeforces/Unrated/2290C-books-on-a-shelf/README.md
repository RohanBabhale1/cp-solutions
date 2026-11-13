# 2290C · Books on a Shelf

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2290/problem/C)

**Topics:** `constructive algorithms` `greedy` `sortings`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 78 ms | 2900 KB ⇪ sync | 2026-11-13 | [link](https://codeforces.com/contest/2290/submission/398256114) |

## Problem

There are $$$n$$$ books, and the height of the $$$i$$$-th book is $$$h_i$$$. You put all the books on a shelf in a row in any order you like.

A book is visible from the left if it is strictly taller than every book to its left. A book is visible from the right if it is strictly taller than every book to its right. In particular, the leftmost book is visible from the left, and the rightmost book is visible from the right.

Find the maximum possible number of books that are visible from at least one side, and any arrangement of the books with this number of visible books.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2\cdot 10^5$$$) — the number of books.

The second line of each test case contains $$$n$$$ integers $$$h_1, h_2, \ldots, h_n$$$ ($$$1 \le h_i \le 10^9$$$) — the heights of the books.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.

### Output

For each test case, print two lines.

In the first line, print a single integer $$$k$$$ — the maximum possible number of books that are visible from at least one side.

In the second line, print $$$n$$$ integers — the heights of the books from left to right in an arrangement in which exactly $$$k$$$ books are visible from at least one side. These $$$n$$$ integers must be the integers $$$h_1, h_2, \ldots, h_n$$$ in some order.

If there are several such arrangements, print any of them.

### Example

Input

```
561 2 2 3 3 31537 7 744 1 3 2113 1 4 1 5 9 2 6 5 3 5
```

Output

```
5
2 3 3 3 2 1
1
5
2
7 7 7
4
3 4 2 1
10
1 3 4 5 9 5 6 5 3 2 1
```

### Note

In the first test case, in the arrangement $$$[2, 3, 3, 3, 2, 1]$$$, the first book of height $$$2$$$ and the first book of height $$$3$$$ are visible from the left. The book of height $$$1$$$, the last book of height $$$2$$$, and the last book of height $$$3$$$ are visible from the right. In total, $$$5$$$ books are visible.

In the third test case, the leftmost book is visible from the left and the rightmost book is visible from the right, but the middle book is visible from neither side.
