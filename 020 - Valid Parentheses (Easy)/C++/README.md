# C++ Solution for 20 - Valid Parentheses

## Approach

To solve this problem, we just need a way to continuously match closing
parentheses with open parentheses. This is pretty easy to do using a FIFO
data structure, and the most commonly used FIFO data structure is a stack.
So, we can run through the string and add each opening character to the stack,
and then at each closing character, we check the top of the stack. If the top of
the stack is the matching opening character, pop the stack and keep going.
Otherwise, the parentheses aren't valid, and we can stop.

## Explanation

Initialize a stack of characters. Then, iterate through the string, and append
each opening character we find to the stack. If we find a closing character, we
first check to see that the stack is not empty. If it is, a match is not
possible, and we can immediately return false. Then, pop the stack and see if
that character is an opening match to the closing character. If it is, continue.
Otherwise, return false. Once the entire string has been iterated, make sure the
stack is empty. If it isn't, there must be an unmatched opening character, so
return false. Otherwise, return true.
