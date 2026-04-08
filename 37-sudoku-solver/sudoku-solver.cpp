class Solution {
public:
    bool solved = false;
    bool safe(vector<vector<char>>& board, int row, int col, char num) {

        for(int i = 0; i < 9; i++) {
            if(board[row][i] == num) return false;
        }

        for(int i = 0; i < 9; i++) {
            if(board[i][col] == num) return false;
        }

        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[startRow + i][startCol + j] == num) {
                    return false;
                }
            }
        }
        return true;
    }
    void solve(vector<vector<char>>& board) {
        if(solved) return;
    
        for(int row = 0; row < 9; row++) {
            for(int col = 0; col < 9; col++) {
                if(board[row][col] == '.') {
                    for(char num = '1'; num <= '9'; num++) {
                        if(safe(board, row, col, num)) {
                            board[row][col] = num;
                            solve(board);
                            if(solved) return;
                            board[row][col] = '.';
                        }
                    }
                    return;
                }
            }
        }
        solved = true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};