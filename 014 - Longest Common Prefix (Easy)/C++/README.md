# C++ Solution for 15 - Roman to Integer

## Approach

Use the first string as our initial prefix, and compare it to all other strings in the array. Slice the prefix down to match the prefixes of all other strings.

## Explanation

Immediately return an empty string if there are no strings, since the longest common prefix would be nothing. Initialize our prefix to the first string in the vector.
For each other string, increment an iterator as long as the two strings are equal. At the end of this, slice the prefix based on the iterator. Once you have done this for
all strings, return.

