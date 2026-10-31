# abc482_b · Blank Bingo

**Platform:** AtCoder &nbsp;|&nbsp; **Contest type:** ABC &nbsp;|&nbsp; [Problem link](https://atcoder.jp/contests/abc482/tasks/abc482_b)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 15.2.0)](./solution.cpp) | 1 ms | 3612 KiB | 2026-10-31 | [link](https://atcoder.jp/contests/abc482/submissions/80500701) |

## Problem

Score : 200 points

Problem Statement

There is a 5\times 5 grid, and some of the cells are marked.

The current state of the grid is given by strings S_1,S_2,S_3,S_4,S_5 of length 5 consisting of `o` and `.`.

The cell at the i-th row from the top and the j-th column from the left is marked if the j-th character of S_i is `o`, and unmarked if it is `.`.

Find the minimum number of additional marks needed to achieve a bingo.

Here, achieving a bingo means that there exist 5 cells lined up in a single vertical, horizontal, or diagonal line, all of which are marked.

Constraints

- Each of S_1,S_2,S_3,S_4,S_5 is a string of length 5 consisting of `o` and `.`.

Input

The input is given from Standard Input in the following format:

```
S_1
S_2
S_3
S_4
S_5
```

Output

Print the answer.

Sample Input 1

```
.o..o
..oo.
.o..o
o.o..
o..oo
```

Sample Output 1

```
2
```

For example, you can achieve a bingo by marking the 2 cells in the 5-th row from the top and the 2-nd and 3-rd columns from the left.

Sample Input 2

```
o..oo
...o.
o.ooo
oo.o.
.o.oo
```

Sample Output 2

```
0
```

If a bingo is already achieved, no additional marks are needed, so the answer is 0.

Sample Input 3

```
o..o.
.o...
..o.o
..o..
o...o
```

Sample Output 3

```
1
```
