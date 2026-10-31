# abc482_c · Band Count

**Platform:** AtCoder &nbsp;|&nbsp; **Contest type:** ABC &nbsp;|&nbsp; [Problem link](https://atcoder.jp/contests/abc482/tasks/abc482_c)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 15.2.0)](./solution.cpp) | 233 ms | 5692 KiB | 2026-10-31 | [link](https://atcoder.jp/contests/abc482/submissions/80502563) |

## Problem

Score : 300 points

Problem Statement

There is a grid with H rows and W columns. Let (i,j) denote the cell at the i-th row from the top and the j-th column from the left.

There are N pieces placed on the grid, and the i-th piece is at (R_i, C_i).

Answer Q queries. Each query is of one of the following 2 types.

- `1 u d`: Print the number of pieces placed in rows u through d.

- `2 l r`: Print the number of pieces placed in columns l through r.

Constraints

- 1 \leq H, W \leq 10^9

- 1 \leq N \leq \min(H \times W, 3 \times 10^5)

- 1 \leq R_i \leq H

- 1 \leq C_i \leq W

- (R_i, C_i) \neq (R_j, C_j) if i \neq j.

- 1 \leq Q \leq 3 \times 10^5

- 1 \leq u \leq d \leq H

- 1 \leq l \leq r \leq W

- All input values are integers.

Input

The input is given from Standard Input in the following format:

```
H W N Q
R_1 C_1
R_2 C_2
\vdots
R_N C_N
\mathrm{query}_1
\mathrm{query}_2
\vdots
\mathrm{query}_Q
```

Each query \mathrm{query}_q is given in one of the following formats:

```
1 u d
```

```
2 l r
```

Output

Print Q lines. The i-th line should contain the answer to the i-th query.

Sample Input 1

```
5 7 5 6
1 1
2 3
2 5
4 3
5 7
1 2 4
2 3 5
1 3 3
2 1 7
1 2 2
2 7 7
```

Sample Output 1

```
3
3
0
5
2
1
```

For the 1-st query, the pieces in rows 2 through 4 are the 2-nd, 3-rd, and 4-th pieces, for a total of 3.

Sample Input 2

```
17 23 12 12
14 8
2 19
17 3
7 11
2 4
10 19
7 8
1 23
14 11
2 23
17 19
7 2
1 2 7
2 9 20
1 3 6
2 8 8
1 11 17
2 1 23
1 1 1
2 20 22
1 7 14
2 3 11
1 15 17
2 19 23
```

Sample Output 2

```
6
5
0
2
4
12
1
0
6
6
2
5
```
