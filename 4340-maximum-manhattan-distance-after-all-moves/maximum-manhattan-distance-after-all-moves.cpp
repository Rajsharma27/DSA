class Solution {
public:
    int maxDistance(string moves) {
        int x = 0;
        int y = 0;
        for(char i:moves){
            if(i=='U'){
                y += 1;
            }
            else if(i=='D'){
                y -= 1;
            }
            else if(i=='L'){
                x -= 1;
            }
            else if(i=='R'){
                x += 1;
            }
        }
        int cnt = 0;
        for(char i:moves){
            if(i=='_') cnt++;
        }

        return cnt + abs(x) + abs(y);
    }
};