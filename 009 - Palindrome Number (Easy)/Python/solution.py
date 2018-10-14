class Solution:
    def reverse(self, x):
        newNum = 0                  # Instantiate our new number.
        
        while x:                    # While x > 0
            newNum *= 10            # Shift our new number left 1 digit
            newNum += x % 10        # Add x's ones value to our number
            
            x //= 10                # Shift x to the right 1 digit
        
        return newNum
    
    def isPalindrome(self, x):
        return x >= 0 and x == self.reverse(x)
        