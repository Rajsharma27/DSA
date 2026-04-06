class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0, y = 0;
        int dir = 0;
        int ans = 0;

        for (int cmd : commands) {

            if (cmd == -2) {
                dir = (dir + 3) % 4;
            }
            else if (cmd == -1) {
                dir = (dir + 1) % 4;
            }
            else {
                for (int step = 0; step < cmd; step++) {
                    int nx = x;
                    int ny = y;

                    if(dir == 0){
                        ny++;
                    } 
                    else if(dir == 1){
                        nx++;
                    } 
                    else if(dir == 2){
                        ny--;
                    } 
                    else if(dir == 3){
                        nx--;
                    } 

                    bool blocked = false;
                    for (auto& obs : obstacles) {
                        if (obs[0] == nx && obs[1] == ny) {
                            blocked = true;
                            break;
                        }
                    }
                    if (blocked) break;
                    x = nx;
                    y = ny;
                    ans = max(ans, x*x + y*y);
                }
            }
        }
        return ans;
    }
};