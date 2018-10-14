# Python Solution for 9 - Palindrome Integer

## Approach

Since the sign is also reversed, we know that any number less than 0 is not palindromic. Thus, we can just reverse the number and see if the
number is still the same. See [7 - Reverse Integer](https://github.com/ihanken/leetcode-solutions/tree/master/007%20-%20Reverse%20Integer%20(Easy)/Python) for
an explanation of reversing an integer.

## Explanation

If the number is negative, immediately return false. Otherwise, reverse the number and return whether the number is equal to the reverse.