/* You are given a a 9 x 9 Sudoku board board. A Sudoku board is valid if the following rules are followed:

Each row must contain the digits 1-9 without duplicates.
Each column must contain the digits 1-9 without duplicates.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without duplicates.
Return true if the Sudoku board is valid, otherwise return false

Note: A board does not need to be full or be solvable to be valid. */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int r = 0; r < board.size(); r++){
            for (int c = 0; c < board.size(); c++){
                if (board[r][c] == '.') continue;
                int boxIndex = (r / 3) * 3 + (c / 3);
                if (rows[r].count(board[r][c]) || cols[c].count(board[r][c]) || boxes[boxIndex].count(board[r][c])){
                    return false;
                }
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                boxes[boxIndex].insert(board[r][c]);
            }
        }
        return true;
    }
};
