// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
       vector<vector<int>>ans;
       unordered_map<int,vector<int>>M;
       for (int i=(int)arr.size()-1; i>-1;i--) M[arr[i]].push_back(i);
       for(int i=0;i<(int)arr.size()-2; i++ )
           for(int j=i+1;j<(int)arr.size()-1;j++)
               for(auto &it: M[-arr[i]-arr[j]]) 
                   if(it>j) ans.push_back({i,j,it}); else break;
       return ans;
    }
};