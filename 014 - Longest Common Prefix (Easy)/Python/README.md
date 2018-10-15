# Python Solution for 14 - Longest Common Prefix

## Approach

There are many solutions for this problem, but the most straightforward one is to take the "minimum" and "maximum" strings and compare the two.
Because strings are compared in lexicographic order, they will be sorted alphabetically, and so whatever characters the prefixes of the min and max
strings share will be shared by all strings.

## Explanation

Keep a reference of the minimum and maximum string. Then, iterate through the minimum string, and compare the same index in the maximum string. If they ever
differ, slice the minimum string at that index and return (since the characters going forward no longer matter). If they never differed, just return the minimum
string. This means that all strings in the array were equal.
