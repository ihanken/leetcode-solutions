class Solution:
    def reverse(self, x):
        negative = x < 0            # Keep track of the number's sign.
        
        x = int(str(abs(x))[::-1])  # Convert the absolute value of x into a string, reverse the string, and convert back to an int
        
        if negative: x *= -1        # Make our new number negative if x was.
            
        return x if -(2 ** 31) <= x <= 2 ** 31 - 1 else 0