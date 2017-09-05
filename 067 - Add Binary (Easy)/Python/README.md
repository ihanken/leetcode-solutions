# Python Solution for 67 - Add Binary

## Approach

The problem description does not explicitly bar you from using built in language
funtions for converting between strings and integers. Thus, the easiest and
fastest way to do this problem in Python is to cast the binary strings to decimal
integers, add them together, and then cast the result back into a binary string.

If you would like a more "legit" solution, check out the C++ version.

## Explanation

Use `int(str(), 2)` to cast the binary strings to integers, and then use `bin()`
to cast back to a binary string. Make sure to slice the first two indices off of
the string, since these contain characters to show that the string is
representing a binary number.
