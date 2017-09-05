# C++ Solution for 67 - Add Binary

## Approach

Just perform normal binary addition using the strings, and build a new sum string
along the way.

## Explanation

Work backwards through a and b. Add the corresponding digit of each to `c`. Then,
add the character representation of the modulo of `c` to our return string.
Finally, divide `c` by two to determine if we need to carry a 1.
