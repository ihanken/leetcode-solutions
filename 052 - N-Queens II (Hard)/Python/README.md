# Python Solution for 52 - N-Queens II

## Approach

To solve this, we use backtracking. This problem is slightly easier than the
standard N-Queens problem because rather than spitting out every configuration,
you just need to count them. The general approach is to place a queen at every
valid position in every row and then recurse to the next row such that every
permutation of queens is generated.

## Explanation

Initialize a `board` and a `sum`. Attempt to place a queen at every column of
the first row of the board, and each time one is place, move on to the next row
and do the same thing. Once the row being attempted has surpassed `n`, a board
has been filled, so increment the sum. In this way, every valid permutation
should be generated.
