# 2278B · Stakes and Shapes

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** Unrated &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2278/problem/B)

**Topics:** `constructive algorithms`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 15 ms | 0 KB ⇪ sync | 2026-11-01 | [link](https://codeforces.com/contest/2278/submission/396813826) |

## Problem

Alice and Bob are playing the Rock, Scissors, Paper game.

The game consists of multiple rounds. In each round, the player must choose one of the three possible outcomes: Rock, Scissors, or Paper. The rules for each round are as follows:

 - Rock beats Scissors;
- Scissors beats Paper;
- Paper beats Rock;
- If both players choose the same outcome, the round ends in a draw.

It is given that the game consists of exactly $$$x+y+z$$$ rounds. Also, Bob knows that Alice will play Rock exactly $$$x$$$ times, Scissors exactly $$$y$$$ times, and Paper exactly $$$z$$$ times. However, Bob does not know the order of Alice's outcomes.

Before the game starts, Bob must choose all of his outcomes in advance. Help him find an optimal sequence of $$$x+y+z$$$ outcomes such that, regardless of the order of Alice's outcomes, the number of rounds won by Bob is at least the number of rounds won by Alice.

It is guaranteed that such a sequence always exists.

### Input

The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. The description of each test case follows.

The only line of each test case contains three space-separated integers $$$x$$$, $$$y$$$, and $$$z$$$ ($$$0 \le x,y,z \le 100$$$; $$$x+y+z \gt 0$$$) — the number of times Alice will play Rock, Scissors, and Paper, respectively.

### Output

Print a string $$$s$$$ of length $$$x+y+z$$$ consisting only of the characters R, S, and P. The $$$i$$$-th character $$$s_i$$$ represents Bob's move in the $$$i$$$-th round: R for Rock, S for Scissors, and P for Paper.

The output string $$$s$$$ must satisfy the required condition. If multiple valid answers exist, output any one of them.

### Example

Input

```
20 0 31 1 2
```

Output

```
RPSSPSS
```

### Note

In the first test case, Alice can only play Paper in all three rounds.

Bob chooses RPS. Thus, Bob loses once with Rock, wins once with Scissors, and draws once with Paper. Therefore, Bob wins $$$1$$$ round and Alice wins $$$1$$$ round, so the required condition is satisfied.
