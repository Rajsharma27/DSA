class Solution {
public: 
    bool helper(vector<int>& candies,int mid,long long k){
        long long ans = 0;
        for (auto candy:candies){
            ans+=candy/mid;
        }
        return ans>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int r=0;
        for (auto candy:candies){
            r=max(r,candy);
        }

        int l = 0;
        int ans = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if (mid==0){
                ans =max(ans,mid);
                l=mid+1;
                continue;}
             if(helper(candies,mid,k)){
                l = mid+1;
                ans = max(ans,mid);
             }
             else{
                r = mid - 1;
             }
        }
        return ans;
    }
};