# 2278D · Lock and Unlock

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2278/problem/D)

**Topics:** `greedy`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 78 ms | 0 KB ⇪ sync | 2026-11-01 | [link](https://codeforces.com/contest/2278/submission/396832762) |

## Problem

You are given an integer array $$$[a_1, a_2, \ldots, a_n]$$$. Initially, all the elements are unlocked.

You may perform the following operation on array $$$a$$$ any number of times (possibly zero):

 - Choose an integer $$$k$$$ ($$$1 \le k \le n$$$) and choose exactly $$$k$$$ distinct indices. The elements at these indices are locked for the current operation. This step incurs a cost equal to $$$k$$$.
- Choose one of the following two actions:

 - Increase every unlocked element by $$$1$$$;
- Decrease every unlocked element by $$$1$$$.

 This step does not incur any additional cost.
- Unlock all the elements. This step does not incur any additional cost.

The total cost is equal to the sum of the individual costs over all the operations performed.

Determine the minimum possible total cost to make all the elements of the array $$$a$$$ equal. Furthermore, among all the ways to achieve this minimum possible total cost, find the minimum number of operations required.

### Input

The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. The description of each test case follows.

The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the length of the array $$$a$$$.

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$) — the elements of the array $$$a$$$.

It is guaranteed that the sum of $$$n$$$ over all the test cases does not exceed $$$2 \cdot 10^5$$$.

### Output

For each test case, print two space-separated integers on a new line — the minimum possible total cost to make all the elements equal, and the minimum number of operations required to make all the elements equal with the minimum possible total cost.

### Example

Input

```
531 2 32-1 -1418 -2 9 1199 9 8 2 4 4 3 5 336 67 7
```

Output

```
2 20 022 2019 761 61
```

### Note

In the first test case, the following sequence of operations is optimal:

 - Lock the first element and decrease all unlocked elements by $$$1$$$. The array changes from $$$[1,2,3]$$$ to $$$[1,1,2]$$$. The cost of this operation is $$$1$$$.
- Lock the third element and increase all unlocked elements by $$$1$$$. The array changes from $$$[1,1,2]$$$ to $$$[2,2,2]$$$. The cost of this operation is $$$1$$$.

The total cost is $$$1+1=2$$$, and exactly $$$2$$$ operations are performed. It is impossible to make all elements equal with a smaller total cost.

In the second test case, all elements are already equal, so the minimum total cost and the minimum number of operations are both $$$0$$$.
