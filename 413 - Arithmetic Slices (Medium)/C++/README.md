# C++ Solution for 413 - Arithmetic Slices

## Approach

This is a textbook Dynamic Programming problem. Essentially, we need to find a
way to recognize where arithmetic sequences start and stop and how many
arithmetic sequences a particular arithmetic sequence represents based upon its
length.

## Explanation

Start with two integers, `sum` and `current`. Initialize both to 0, and begin
iterating through all of the integers in the array beginning at index 2, since
an arithmetic series requires a minimum of three numbers. If the difference
between `A[index - 2]` and `A[index - 1]` is equal to the difference between
`A[index - 1]` and `A[index]`, an arithmetic series has been found, so Increment
`current` (which represents the current length) and add `current` to `sum`.
However, if those two values are not equal, reset `current` to 0, since a new
series must be found. Once all the numbers have been visited, the answer will be
stored in `sum`.
