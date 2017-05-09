class Solution(object):
    def numberOfArithmeticSlices(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        # There must be three terms for an arithmetic sequence to exist.
        if len(A) < 3: return 0

        dp, offset = [0] * len(A), 1 # Initialize our dp array and offset.

        for i in range(2, len(A)): # Iterate through everything past i = 1
            if A[i - 1] - A[i - 2] == A[i] - A[i - 1]: # The number is part of an arith. series.
                dp[i] = dp[i - 1] + offset  # Copy the value forward and add the offset to it.
                offset += 1                 # Increment the offset.
            else: # Otherwise, reset the offset and copy the value forward.
                dp[i] = dp[i - 1]
                offset = 1


        return dp[-1] # The last index of the dp array is our answer.
