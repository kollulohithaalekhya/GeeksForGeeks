class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        long long int factor_sum = 1;
        for(long long int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                if(i*i!=n) factor_sum += i + n/i;
                else factor_sum += i;
            }
        }
        if(factor_sum==n && n!=1) return 1;
        return 0;
    }
};