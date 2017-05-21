class Solution {
public:
    bool checkPosition(vector<vector<bool>> board, int i, int j) {
        int row = i - 1;

        while (row >= 0) {
            if (board[row][j]) return false;
            if (j + (i - row) < board.size() && board[row][j + (i - row)]) return false;
            if (j - (i - row) >= 0 && board[row][j - (i - row)]) return false;

            row--;
        }

        return true;
    }
    int totalNQueens(int n, vector<vector<bool>> board = vector<vector<bool>>(), int current = 0) {
        if (n == 0) return 0;

        if (current == n) return 1;

        if (board.size() == 0) {
            for (int i = 0; i < n; i++) board.push_back(vector<bool>(n, false));
        }

        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (checkPosition(board, current, i)) {
                board[current][i] = true;
                sum += totalNQueens(n, board, current + 1);
                board[current][i] = false;
            }
        }

        return sum;
    }
}
