class Solution {
public:

    int countSetBits(int n){
        int count = 0;
        while(n){
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {

        sort(arr.begin(), arr.end(), [&](int a, int b){
            int cnt1 = countSetBits(a);
            int cnt2 = countSetBits(b);

            if(cnt1 == cnt2)
                return a < b;   

            return cnt1 < cnt2;
        });

        return arr;
    }
};