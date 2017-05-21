# C++ Solution for 419 - Battleships in a Board

## Approach

Just iterate the graph. When you find an `X`, make sure that this is the first
`X` of a ship. If it is, the ship has not been counted yet, so count it.
Otherwise, just keep going.

## Explanation

Iterate each row of the board, then iterate each column. Then add 1 to `count`
if all of the following are true.

1. The current character is an `X`.
2. Either the row is 0 or the above character is not an `X`.
3. Either the column is 0, or the left character is not an `X`.

Once every character is iterated, return the `count`.
