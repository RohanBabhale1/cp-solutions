# GENTHRU · Practice Coding Problem

**Platform:** CodeChef &nbsp;|&nbsp; **Difficulty:** Unrated &nbsp;|&nbsp; [Problem link](https://www.codechef.com/problems/GENTHRU)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | — | — | 2026-11-23 | [link](https://www.codechef.com/DSAMONDAY030/problems/GENTHRU?tab=ide) |

## Problem

Genthru has observed that all the $N$ cities on greed island have good trade relations with each other. He deduces that the reason for this is that there exists a route between any pair of cities on greed island. Being a villain he wants to sever the trade relation between at least one pair of cities, so he decides to destroy exactly 1 road among the existing $M$ roads. You have to determine the exact number of roads that Genthru could destroy such that it results in there being no route between at least 1 pair of cities.

###Input:

- First line will contain $T$, number of testcases. Then the testcases follow.
- Next line contains the number of cities $N$ and the number of roads $M$.
- Next $M$ lines contain 2 integers $a_i$ and $b_i$ indicating that there exists a road between $a_i$ and $b_i$. ($1 \leq i \leq M$,  $1 \leq a_i \leq N$, $1 \leq b_i \leq N$)

###Output:
For each testcase, output in a single line the number of roads that Genthru could destroy.

###Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 1000$
- $N-1 \leq M \leq N*(N-1)/2$
- A route exists between every pair of cities initially
- There can be at most 1 road between any pair of cities
- There are no roads from any city to itself

###Sample Input:
	2
	6 6
	1 2
	1 3
	2 3
	1 4
	4 5
	4 6
	3 3
	1 2
	1 3
	2 3

###Sample Output:
	3
	0

###EXPLANATION:
	Case 1: Genthru can destroy one of the three roads between 1-4, 4-5 or 4-6.
	Case 2: Even if Genthru destroys any of the 3 roads, a route still exists between every pair of cities.

All submissions for this problem are available.

**Time limit:** 1 s
