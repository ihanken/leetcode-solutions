# C++ Solution for 312 - Burst Balloons

## Approach

This is an extremely hard problem for me to visualize. It's one of the more
complicated dynamic programming problems. However, the key is finding the max of
each subrange to find the global max.

## Explanation

Add a 1 to each side of the array for ease of calculation. Then, iterate each
possible range, from '1' to 'n'. Then, iterate each possible range of this size.
At each of these ranges, find the local max amount of coins. Once you have done
all of these ranges, the global max will be at `dp[1][n]`.
