// Problem: Riptide
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/contest/2254/problem/A
/* 
Solved: There is only 3 numbers, we do sort them to a,b,c.
    so by increasing a(lowest) by 1 ca make it equal to b.
    decreasing c(highest) by 1 can make it equal to b.
    So we are seing which one has the lowest diffrence.
*/  

/*
A. Riptide
time limit per test1 second
memory limit per test256 megabytes
Alice, Bob, and Charlie are playing a game with tokens. They start with a
, b
, and c
 tokens, respectively.

The game is played in rounds. Before the beginning of each round, they check the number of tokens everyone has:

If any two players have the exact same number of tokens, the game immediately ends.
Otherwise, the round begins, all three players have a strictly different number of tokens. The player with the strictly most tokens gives exactly 1
 token to the player with the strictly fewest tokens.
Given the starting tokens a
, b
, and c
, determine exactly how many rounds the game will last before it ends.

Input
The first line contains a single integer t
 (1≤t≤103
) — the number of test cases.

Each test case consists of a single line containing three integers a
, b
, and c
 (1≤a,b,c≤10
).

Output
For each test case, output a single integer — the number of rounds the game will last before it ends.

Example
InputCopy
6
1 2 3
4 6 1
3 3 7
1 7 10
6 1 9
1 1 1
OutputCopy
1
2
0
3
3
0
Note
In the first test case:

No two players have the same number of tokens.
Charlie has the most tokens (3
 tokens), and Alice has the fewest tokens (1
 token). Therefore, Charlie gives Alice a token.
Now, Alice has 2
 tokens, Bob has 2
 tokens, and Charlie has 2
 tokens. Since there are two players (or more) with the same number of tokens, the game ends.
The game ended after 1
 round, so the answer is 1
.

In the second test case, the game is played as follows:

Bob gives Charlie a token, now Alice has 4
 tokens, Bob has 5
 tokens, and Charlie has 2
 tokens.
Bob gives Charlie a token, now Alice has 4
 tokens, Bob has 4
 tokens, and Charlie has 3
 tokens. Since two players have the same number of tokens, the game ends.
The game lasted 2
 rounds.

In the third test case, two players already have the same number of tokens. So the answer is 0
 since no rounds were played
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int cs; cin >> cs;
    while(cs--) {
        vector<int> v(3);
        for(int i = 0; i < 3; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        // b never change, so A can be equal to B || C can be equal to b
        cout << min(v[1] - v[0], v[2] - v[1]) << endl; 
    }

    return 0;
}