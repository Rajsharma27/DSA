class Solution {
public:
    bool check(string str1, string str2){
        int j = 0;
        int m = str1.size();
        int n = str2.size();

        for(int i=0; i<n && j<m;i++){
            if(str1[j]==str2[i]){
                j++;
            }
        }
        return j==m;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        string t = s;
        int l = 0;
        int r = removable.size();

        while(l<=r){
            int mid = (l+r)/2;
            for(int i=0;i<mid;i++)
                t[removable[i]] = '*';
            if(check(p,t))
                l = mid+1;
            else{
                for(int i=0;i<mid;i++) t[removable[i]] = s[removable[i]];
                r = mid-1;
            }
        }
        return r;
    }
};