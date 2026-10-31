# abc482_d · Wannabe Zombie

**Platform:** AtCoder &nbsp;|&nbsp; **Contest type:** ABC &nbsp;|&nbsp; [Problem link](https://atcoder.jp/contests/abc482/tasks/abc482_d)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 15.2.0)](./solution.cpp) | 87 ms | 5056 KiB | 2026-10-31 | [link](https://atcoder.jp/contests/abc482/submissions/80505962) |

## Problem

Score : 400 points

Problem Statement

There are N people, numbered 1 to N, standing on a number line.

Person i is standing at coordinate X_i.
Here, X_i is even for i=1,2,\dots,N, and X_1 < X_2 < \cdots < X_N holds.

For each k=1,2,\dots,N, solve the following problem.

At time 0, person k becomes a zombie. Everyone other than person k remains human.

From time 0 onward, humans and zombies can move freely on the number line at a speed of at most 1 per unit time.

When a zombie and a human are at the same coordinate, that human becomes a zombie.

Find the minimum possible time at which everyone has become a zombie.

It can be proved that the answer is an integer under the constraints of this problem.

Constraints

- 1 \leq N \leq 2 \times 10^5

- 0 \leq X_1 < X_2 < \cdots < X_N \leq 10^9

- X_i is even.

- All input values are integers.

Input

The input is given from Standard Input in the following format:

```
N
X_1 X_2 \dots X_N
```

Output

Print N lines.
The i-th line (1 \leq i \leq N) should contain the answer to the problem for k=i.

Sample Input 1

```
5
2 4 10 14 18
```

Sample Output 1

```
8
7
6
6
8
```

For k=1, if person 1 moves in the positive direction of the number line at speed 1 and persons 2,3,4,5 move in the negative direction at speed 1, everyone will have become a zombie by time 8.

For k=2, if each person moves as follows, everyone will have become a zombie by time 7.

- Person 1: Moves in the positive direction at speed 1.

- Person 2: Moves in the positive direction at speed 1 until time 3, and in the negative direction at speed 1 from time 3 onward.

- Person 3: Moves in the negative direction at speed 1 until time 3, and in the positive direction at speed 1 from time 3 onward.

- Person 4: Moves in the negative direction at speed 1.

- Person 5: Moves in the negative direction at speed 1.

Sample Input 2

```
9
140322306 171833796 356303608 595703832 701965684 798563428 857902324 933683272 971602066
```

Sample Output 2

```
415639880
399884135
307649229
280821689
280821689
329120561
358790009
396680483
415639880
```
