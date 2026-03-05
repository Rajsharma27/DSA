class Solution {
public:
    int minOperations(string s) {
        int temp[2] = {0};
        for(int i=0;i<s.size();i+=2){
            temp[s[i]=='0']++;
        }
        for(int i=1;i<s.size();i+=2){
            temp[s[i]=='1']++;
        }
        return min(temp[0],temp[1]);
    }
};