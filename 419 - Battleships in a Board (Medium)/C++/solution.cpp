class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int count = 0; // Our ship count.

        for (int i = 0; i < board.size(); i++) {        // Iterate the rows.
            for (int j = 0; j < board[i].size(); j++) { // Iterate the columns.
                // Make sure the current character is an 'X', the character to the
                // left is not an 'X', and the character above is not an 'X'. This
                // indicates an uncounted battleship.
                count += board[i][j] == 'X' && (i == 0 || board[i - 1][j] == '.')
                            && (j == 0 || board[i][j - 1] == '.');
            }
        }

        return count;
    }
};
