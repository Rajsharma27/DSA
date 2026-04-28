class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        int remainder = grid[0][0] % x;
        vector<int> temp;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back(grid[i][j]);
                if(grid[i][j]%x!=remainder){
                    return -1;
                }
            }
        }
        sort(temp.begin(),temp.end());
        int p = temp.size();
        int med = temp[p/2];
        int ans = 0;

        for(int q: temp){
            ans += (abs(q-med)/x);
        }
        return ans;
    }
};