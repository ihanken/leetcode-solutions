class Solution:
    def reverse(self, x):
        negative = x < 0            # Keep track of the number's sign.
        
        x = abs(x)                  # Get rid of the number's sign.
        newNum = 0                  # Instantiate our new number.
        
        while x:                    # While x > 0
            newNum *= 10            # Shift our new number left 1 digit
            newNum += x % 10        # Add x's ones value to our number
            
            x //= 10                # Shift x to the right 1 digit
        
        if negative: newNum *= -1   # Make our new number negative if x was.
        
        return newNum if -(2 ** 31) <= newNum <= 2 ** 31 - 1 else 0