class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();            // A record of the original size.
        nums.insert(nums.begin(), 1);   // Add a 1 to the beginning for ease.
        nums.insert(nums.end(), 1);     // Add a 1 to the end for ease.

        // dp[i][j] is the maximum # of coins that can be obtained
        // by popping balloons only in the range [i,j]
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), 0));

        for (int len = 1; len <= n; ++len) { // Iterate all possible range lengths.
            for (int start = 1; start <= n - len + 1; ++start) { // Iterate each start position.
                int end = start + len - 1;  // Calculate each end position.
                int maxCoins = 0;          // A record of the maximum coins found.
                for (int final = start; final <= end; ++final) {
                    int coins = dp[start][final - 1] + dp[final + 1][end]; // A record of the coins from the subranges.
                    coins += nums[start - 1] * nums[final] * nums[end + 1]; // Add the coins from this pop.
                    maxCoins = max(coins, maxCoins); // Check for a new max.
                }
                dp[start][end] = maxCoins; // Record the local max.
            }
        }
        return dp[1][n]; // Return the global max.
    }
};
