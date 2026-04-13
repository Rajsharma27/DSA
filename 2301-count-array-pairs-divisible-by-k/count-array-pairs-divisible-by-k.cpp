class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int,long long> freq;
        long long result = 0;

        for(int it : nums){
            int g = gcd(it,k);

            for(auto& [g1,count]:freq){
                if((1LL*g*g1)%k==0){
                    result += count;
                }
            }
            freq[g]++;
        }
        return result;
    }
};