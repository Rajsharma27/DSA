class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0;
        int rsum = 0;
        int max_sum = 0;

        for(int i=0;i<k;i++){
            lsum += cardPoints[i];
        }
        max_sum = lsum;
        int j = cardPoints.size()-1;

        for(int i=k-1;i>=0;i--){
            lsum -= cardPoints[i];
            rsum += cardPoints[j];
            j--;
            max_sum = max(max_sum,lsum+rsum);
        }
        return max_sum;
    }
};