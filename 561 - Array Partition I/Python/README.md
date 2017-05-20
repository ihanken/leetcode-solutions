# Python Solution for 561 - Array Partition I

## Approach

This solution isn't perfectly optimal; there's an O(n) time and O(n) space
solution using bucketing. However, a sorting solution is too simple to pass up,
and it uses no extra space.

## Explanation

Sort the list of numbers and then add every other number. Pretty simple.
Running time is O(nlogn) and space is O(1).
