class Solution {
public:
    bool isValid(long long sum, int x) {
        if (sum % 10 != x) return false;

        while (sum >= 10)
            sum /= 10;

        return sum == x;
    }

    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (isValid(sum, x))
                    ans++;
            }
        }

        return (int)ans;
    }
};