class Solution(object):
    def addBinary(self, a, b):
        a = int(a,2)            # Convert a to an int
        b = int(b,2)            # Convert b to an int

        return bin(a + b)[2:]   # Return the sum as a binary string.
