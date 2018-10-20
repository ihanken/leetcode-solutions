class Solution:
    def isMatch(self, s, p):
        dp = [[False for _ in range(len(s) + 1)] for _ in range(len(p) + 1)]
        
        # Our base case is that two empty strings will match each other
        dp[0][0] = True
        
        # A pattern with only * matchers will always match an empty string.
        for i in range(1, len(p)): dp[i + 1][0] = dp[i - 1][0] and p[i] == '*'
        
        for i in range(len(p)):
            for j in range(len(s)):
                # If a * matcher is found, we know that the string can still
                # matches up to that point, since you can insert 0 characters 
                if p[i] == '*':
                    # String will match by either adding no characters or just one character
                    dp[i + 1][j + 1] = dp[i - 1][j + 1] or dp[i][j + 1]
                    
                    # If the single character in p equals the single character in j,
                    # the strings will have the same equality as they did at the
                    # previous character of s, since the star match can match that character.
                    if p[i - 1] == s[j] or p[i - 1] == '.':
                        dp[i + 1][j + 1] |= dp[i + 1][j]
                else:
                    # If the characters are equal, or we found a '.', the equality
                    # stays the same.
                    dp[i + 1][j + 1] = dp[i][j] and (p[i] == s[j] or p[i] == '.')
        
        return dp[-1][-1]
        