class Solution {
public:
    vector<long long> getDistances(vector<int>& nums) {
        int n = nums.size();
        vector<long long> arr(n, 0);
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto& it : mp) {
            vector<int>& idx = it.second;
            int temp = idx.size();

            long long prefix = 0;
            long long totalSum = 0;

            for (int x : idx) totalSum += x;

            for (int i = 0; i < temp; i++) {
                long long left = (long long)idx[i] * i - prefix;
                long long right = (totalSum - prefix - idx[i]) - (long long)idx[i] * (temp - i - 1);
                arr[idx[i]] = left + right;
                prefix += idx[i];
            }
        }
        return arr;
    }
};