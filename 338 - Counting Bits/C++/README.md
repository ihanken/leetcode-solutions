# C++ Solution for 338 - Counting Bits

## Approach

The trick to this one is some clever bit manipulation. The amount of 1's in the
binary representation of a number is equivalent to the amount of 1's in the
bitwise AND of that number and the previous number. The result of this bitwise
AND will always be smaller than the number.

## Explanation

For each number in the array we create, simply add 1 to the record of the amount
of 1's of the result of `i & (i - 1)`. That's all there is to it. It's a
combination of bit manipulation and dynamic programming.
