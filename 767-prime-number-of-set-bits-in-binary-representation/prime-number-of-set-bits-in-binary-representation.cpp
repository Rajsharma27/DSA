class Solution {
public:
    int countSetBits(int n){
      int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
            }
            return count;
}
bool isprime(int n){
    if(n<=1){
        return false;
    }
    int cnt = 0;
    for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

    if(cnt>0){
        return false;
    }
    else{
        return true;
    }
}
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i=left;i<right+1;i++){
            int p = countSetBits(i);
            if(isprime(p)){
                ans++;
            }
        }
        return ans;
    }
};