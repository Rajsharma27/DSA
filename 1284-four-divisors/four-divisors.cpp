class Solution {
public:
    int solve(int n){
        int count = 0;
        int sum = 0;
    for(int i=1; i*i<=n; i++){
            if(n%i==0){
                int p=n/i;
                if(p==i){
                    count+=1;
                    sum+=i;
                }
                else{
                    count+=2;
                    sum+=i+p;
                }
            }
            if(count>4) return 0;
        }
        if(count==4){
            return sum;
        }
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;

        for (int x : nums) {
            totalSum += solve(x);
        }

        return totalSum;
    }
};