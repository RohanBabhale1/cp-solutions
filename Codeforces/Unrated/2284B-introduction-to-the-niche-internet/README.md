# 2284B · Introduction to the Niche Internet

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2284/problem/B)

**Topics:** `constructive algorithms` `greedy` `sortings`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 78 ms | 0 KB ⇪ sync | 2026-11-12 | [link](https://codeforces.com/contest/2284/submission/397599417) |

## Problem

Having failed to become a grandmaster in two months, Nikolai was completely disappointed in a career in competitive programming and decided to switch to political streaming.

It's known that no streamer can exist without the support of their beloved viewers, so every stream Nikolai necessarily receives some number of donations, forming a sequence $$$a$$$. Note that Nikolai is watched by a large number of hackers, so some donations may have negative values.

Nikolai considers the $$$m$$$-th donation to be very pleasant if its size is at least the average of all previous donations, that is, $$$a_m \cdot (m - 1) \ge \sum\limits_{i=1}^{m-1} a_i$$$. In particular, the first donation is always very pleasant.

Nikolai considers the stream to have paid off if during the broadcast he receives exactly $$$k$$$ very pleasant donations.

Nikolai knows that today he will receive $$$n$$$ donations from viewers, but he does not know in which order. Please help the viewers choose the order of sending donations so as to please Nikolai and make the stream pay off!

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 2 \cdot 10^5$$$) — the number of donations and the required number of very pleasant donations.

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$) — the donation sizes.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

### Output

For each test case, output "NO" if there is no suitable order of sending the donations.

Otherwise, output "YES" on the first line, and on the second line output $$$n$$$ integers: the donation sizes in the order they are sent. If there are multiple solutions, output any of them.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

### Example

Input

```
43 11 2 33 15 5 53 2-1 -2 -34 30 0 10 -10
```

Output

```
YES
3 2 1
NO
YES
-1 -3 -2
YES
10 -10 0 0
```

### Note

In the first test case, one suitable order is $$$[3, 2, 1]$$$. The first donation is always very pleasant. The second is not very pleasant, since $$$2 \cdot 1  \lt  3$$$, and the third is not, since $$$1 \cdot 2  \lt  3 + 2$$$. Thus, exactly $$$1$$$ donation is very pleasant.

In the second test case, it can be shown that no suitable order exists.

In the third test case, one suitable order is $$$[-1, -3, -2]$$$. The first donation is very pleasant. The second is not very pleasant, since $$$(-3) \cdot 1  \lt  -1$$$, while the third is, since $$$(-2) \cdot 2 \ge -1 + (-3)$$$. Thus, exactly $$$2$$$ donations are very pleasant.
