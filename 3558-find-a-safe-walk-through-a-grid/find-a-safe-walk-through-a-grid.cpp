class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> temp(m, vector<int>(n, INT_MAX));
        deque<pair<int,int>> dq;
        int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

        temp[0][0] = grid[0][0];
        dq.push_front({0,0});

        while(!dq.empty()){
            auto [x,y] = dq.front();
            dq.pop_front();

            for(auto& d:dirs){
                int nx = x + d[0];
                int ny = y + d[1];

                if(nx>=0 && ny>=0 && nx<m && ny<n){
                    int cost = temp[x][y] + grid[nx][ny];

                    if(cost<temp[nx][ny]){
                        temp[nx][ny] = cost;

                        if(grid[nx][ny]==0){
                            dq.push_front({nx,ny});
                        }
                        else{
                            dq.push_back({nx,ny});
                        }
                    }
                }
            }
        }
        return health - temp[m-1][n-1] >= 1;
    }
};