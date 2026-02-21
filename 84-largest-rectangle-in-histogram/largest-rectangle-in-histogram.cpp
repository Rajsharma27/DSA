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
    int largestRectangleArea(vector<int>& heights) {
        int maxi = INT_MIN;
        vector<int> vect_1 = nsr(heights);
        vector<int> vect_2 = nsl(heights);
        for(int i=0;i<heights.size();i++){
            int width = vect_1[i]-vect_2[i]-1;
            int length = heights[i];
            int area = length*width;
            maxi = max(maxi,area);
        }
        return maxi;
    }
};