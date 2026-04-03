class Solution {
public:
    void solve(vector<vector<int>>& maze, int i, int j, string path, vector<string>& temp){
        int n = maze.size();
        
        if(i>=n || j>=n || i<0 || j<0 || maze[i][j] == 0)
            return;
        
        if(i == n-1 && j == n-1){
            temp.push_back(path);
            return;
        }
        maze[i][j] = 0;
        
        solve(maze, i+1, j, path+'D', temp);
        solve(maze, i, j-1, path+'L', temp);
        solve(maze, i, j+1, path+'R', temp);
        solve(maze, i-1, j, path+'U', temp);
        
        maze[i][j] = 1;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> temp;
        
        if(maze[0][0] == 0) return temp;
        
        solve(maze, 0, 0, "", temp);
        
        sort(temp.begin(), temp.end());
        return temp;
    }
};