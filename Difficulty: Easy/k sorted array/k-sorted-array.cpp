class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++){
            v.push_back({arr[i], i});
        }
        
        sort(v.begin(),v.end());
        
        bool flag = true;
        for(int i=0;i<n;i++){
            if(abs(v[i].second - i) > k){
                flag = false;
                break;
            }
        }
        return flag == true ? "Yes" : "No";
    }
};