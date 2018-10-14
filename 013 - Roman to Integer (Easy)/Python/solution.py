''' values holds out character to integer mappings '''
values = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000,
}

class Solution:
    def romanToInt(self, s):
        result = last = 0                           # Keep track of our sum and the previous value seen
        
        for char in s:                              # Iterate through each character in s
            current = values[char]                  # Set current to the value mapping
            result += current                       # Add that value to our result
            
            if current > last: result -= 2 * last   # If the character we are currently looking at is larger than the previous one,
                                                    # then this is a special case, and we should have subtracted instead.
            last = current                          # Move current up
            
        return result    
        