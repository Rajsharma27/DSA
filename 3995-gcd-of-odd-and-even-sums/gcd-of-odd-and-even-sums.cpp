class Solution {
public:
    int gcd(int a, int b){

    if(a==0 || b==0) return max(a, b);
    
    int result = min(a, b);

    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
    int gcdOfOddEvenSums(int n) {
        int oddsum = pow(n,2);
        int evensum = n*(n+1);

        return gcd(oddsum,evensum);
    }
};