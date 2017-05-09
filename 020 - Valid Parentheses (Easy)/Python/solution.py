class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        stack = [] # Our stack.

        for char in s: # Iterate through each character in the string.
            # If it's an opening char, just append it.
            if char in ('(', '[', '{'): stack.append(char)
            # Otherwise, see if the top of the stack is an opening char that matches.
            # If the stack is empty, we know there isn't a match.
            else:
                if len(stack) == 0: return False # Stack is empty, return False.
                elif char == ')' and stack.pop() == '(': pass # Found a match.
                elif char == ']' and stack.pop() == '[': pass # Found a match.
                elif char == '}' and stack.pop() == '{': pass # Found a match.
            else: return False # Didn't find a match.

        return len(stack) == 0  # If the stack is empty, the parentheses are
                                # balanced.
