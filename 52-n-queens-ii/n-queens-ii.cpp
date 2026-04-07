class Solution {
public:
    bool safe(int row, int col, vector<string>& path, int n){
        for(int i = 0; i < row; i++) {
            if(path[i][col] == 'Q') return false;
        }
        int i = row, j = col;
        while(i >= 0 && j >= 0) {
            if(path[i][j] == 'Q') return false;
            i--; j--;
        }
        i = row; j = col;
        while(i >= 0 && j < n) {
            if(path[i][j] == 'Q') return false;
            i--; j++;
        }
        return true;
    }

    void solve(int n, vector<string>& path, vector<vector<string>>& total, int row){
        if(row == n){
            total.push_back(path);
            return;
        }

        for(int col = 0; col < n; col++){
            if(safe(row, col, path, n)){
                path[row][col] = 'Q';
                solve(n, path, total, row + 1);
                path[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> total;
        vector<string> path(n, string(n, '.'));

        solve(n, path, total, 0);

        return total.size();
    }
};