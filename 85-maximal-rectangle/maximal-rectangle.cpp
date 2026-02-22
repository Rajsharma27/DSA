class Solution {
  public:
    vector<int> nsr(vector<int> &arr){
    int n = arr.size();
    vector<int> res(n, n); 
    stack<int> st;

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }

        if(!st.empty()){
            res[i] = st.top();
        }

        st.push(i);
    }
    return res;
}
    vector<int> nsl(vector<int> &arr){
    int n = arr.size();
    vector<int> res(n, -1);
    stack<int> st;

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }

        if(!st.empty()){
            res[i] = st.top();
        }

        st.push(i);
    }
    return res;
}
    int getMaxArea(vector<int> &arr) {
        int maxi = INT_MIN;
        vector<int> vect_1 = nsr(arr);
        vector<int> vect_2 = nsl(arr);
        for(int i=0;i<arr.size();i++){
            int width = vect_1[i]-vect_2[i]-1;
            int length = arr[i];
            int area = length*width;
            maxi = max(maxi,area);
        }
        return maxi;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
    if(matrix.size() == 0) return 0;

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> height(m, 0);
    int maxi = 0;

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            
            if(matrix[i][j] == '1')
                height[j] += 1;
            else
                height[j] = 0;
        }

        maxi = max(maxi, getMaxArea(height));
    }

    return maxi;
}
};