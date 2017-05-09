class Solution(object):
    def checkPosition(self, board, i, j):
        row = i - 1 # We only need to check all previous rows.

        while row >= 0:
            if board[row][j]: return False # Check vertically.
            if j + (i - row) < len(board) and board[row][j + (i - row)]: return False # Check the right diagonal.
            if j - (i - row) >= 0 and board[row][j - (i - row)]: return False # Check the left diagonal.

            row -= 1 # Decrement our row.

        return True # If we make it out of the while loop, the position is valid.
    def totalNQueens(self, n, board = None, current = 0):
        """
        :type n: int
        :rtype: int
        """
        if n == 0: return 0 # It's a null board.

        if current == n: return 1 # We have filled every row, so add 1 to our total.

        # Initialize the board to be of size nxn on the first pass of the algorithm.
        if board == None: board = [[False for _ in range(n)] for _ in range(n)]

        sum = 0 # Initialize our sum to 0.

        for i in range(n): # Iterate through each column in the row.
            if self.checkPosition(board, current, i): # Check to see that the position is valid.
                board[current][i] = True # Set the position to true.
                sum += self.totalNQueens(n, board, current + 1) # Backtrack
                board[current][i] = False # Set the position back to false.

        return sum # Return our sum.
