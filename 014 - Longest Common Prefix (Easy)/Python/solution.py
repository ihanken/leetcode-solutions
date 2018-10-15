class Solution:
    def longestCommonPrefix(self, strs):
        if not strs: return ""                                      # If there are no strings, return an empty string.
        
        minString = min(strs)                                       # Find the minimum string
        maxString = max(strs)                                       # Find the maximum string
        
        for index, char in enumerate(minString):                    # For each character in the min string
            if char != maxString[index]: return minString[:index]   # Return a slice if it doesn't match the max string character
            
        return minString                                            # Return minString
        