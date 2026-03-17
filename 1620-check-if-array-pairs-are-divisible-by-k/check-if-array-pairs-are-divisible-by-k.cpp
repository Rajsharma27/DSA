class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> temp(k,0);
        int n = arr.size();
        for(int i=0;i<n;i++){
            int val = (arr[i] % k + k) % k;
           temp[val] += 1;
        }
        if(temp[0]%2!=0) return false;
        for(int i=1;i<k;i++){
            if(temp[i]!=temp[k-i]){
                return false;
            }
        }
        return true;
    }
};