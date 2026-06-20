class Solution {
public:
    bool helper(vector<int>& bloomDay, int mid, int m, int k) {
        int count = 0;  
        int temp = 0;    
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                temp++;
                if (temp == k) {
                    count++;
                    temp = 0;
                }
            } else {
                temp = 0;
            }
        }

        return count >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if ((long long)m * k > n) return -1;

        int i = 1;
        int j = *max_element(bloomDay.begin(), bloomDay.end());
        
        while (i < j) {
            int mid = i + (j - i) / 2;

            if (helper(bloomDay, mid, m, k)) {
                j = mid; 
            } else {
                i = mid + 1;
            }
        }

        return i;
    }
};