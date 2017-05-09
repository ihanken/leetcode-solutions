class Solution(object):
    def numberOfArithmeticSlices(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        # There must be three terms for an arithmetic sequence to exist.
        if len(A) < 3: return 0

        current, sum = 0, 0 # Initialize the current series length and our sum.

        for i in range(2, len(A)): # Iterate through everything past i = 1.
            if A[i - 1] - A[i - 2] == A[i] - A[i - 1]: # The index is part of an arith. series.
                current += 1 # Increment the current length.
                sum += current # Add the current length to our sum.
            else: # Otherwise, a new arithmetic series must be found.
                current = 0 # Reset the current length.

        return sum # sum is our answer.
