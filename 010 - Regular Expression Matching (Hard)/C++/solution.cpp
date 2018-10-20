class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> dp(p.size() + 1, vector<bool>(s.size() + 1, false));
        
        // Our base case is that two empty strings will match each other
        dp[0][0] = true;
        
        # A pattern with only * matchers will always match an empty string.
        for (int i = 1; i < p.size(); i++) {
            dp[i + 1][0] = dp[i - 1][0] && p[i] == '*';
        }
        
        for (int i = 0; i < p.size(); i++) {
            for (int j = 0; j < s.size(); j++) {
                /**
                 * If a * matcher is found, we know that the string can still
                 * matches up to that point, since you can insert 0 characters 
                 */
                if (p[i] == '*') {
                    // String will match by either adding no characters or just one character
                    dp[i + 1][j + 1] = dp[i - 1][j + 1] || dp[i][j + 1];
                    
                    /**
                     * If the single character in p equals the single character in j,
                     * the strings will have the same equality as they did at the
                     * previous character of s, since the star match can match that character.
                     */
                    if (p[i - 1] == s[j] || p[i - 1] == '.') {
                        dp[i + 1][j + 1] = dp[i + 1][j + 1] || dp[i + 1][j];
                    } 
                }
                else {
                    // If the characters are equal, or we found a '.', the equality stays the same.
                    dp[i + 1][j + 1] = dp[i][j] && (p[i] == s[j] || p[i] == '.');
                }
            }
        }
        
        return dp[p.size()][s.size()];
    }
};