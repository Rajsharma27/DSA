class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> prefix(rows, vector<int>(cols, 0));
        vector<vector<int>> suffix(rows, vector<int>(cols, 0));
        vector<vector<int>> ans(rows, vector<int>(cols, 0));


        const int MOD = 12345;

prefix[0][0] = 1;
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        if (i == 0 && j == 0) continue;

        if (j > 0)
            prefix[i][j] = (1LL * prefix[i][j-1] * mat[i][j-1]) % MOD;
        else
            prefix[i][j] = (1LL * prefix[i-1][cols-1] * mat[i-1][cols-1]) % MOD;
    }
}

suffix[rows-1][cols-1] = 1;
for (int i = rows-1; i >= 0; i--) {
    for (int j = cols-1; j >= 0; j--) {
        if (i == rows-1 && j == cols-1) continue;

        if (j < cols-1)
            suffix[i][j] = (1LL * suffix[i][j+1] * mat[i][j+1]) % MOD;
        else
            suffix[i][j] = (1LL * suffix[i+1][0] * mat[i+1][0]) % MOD;
    }
}

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        ans[i][j] = (1LL * prefix[i][j] * suffix[i][j]) % MOD;
    }
}
    return ans;
    }
};