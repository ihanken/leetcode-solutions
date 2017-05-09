# Python Solution for 20 - Valid Parentheses

## Approach

This is a textbook Dynamic Programming problem. Essentially, we need to find a
way to recognize where arithmetic sequences start and stop and how many
arithmetic sequences a particular arithmetic sequence represents based upon its
length.

## Explanation

Start with a simple array. and an integer for an offset. The first two indices
of the array should always be 0 (since an arithmetic series requires a sequence
of at least three numbers). Then, iterate through each number from the third
index onward and check if each sequence of three numbers create an arithmetic
series. If it does, set that index of the dynamic programming array to the value
in the previous index plus the offset. Otherwise, set it to the value in the
previous index and reset the offset to one. Repeat until all values of the
numbers have been iterated, and the answer will be in the last index of the
dynamic programming array.
