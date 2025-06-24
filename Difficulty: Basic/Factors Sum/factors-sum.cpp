class Solution {
  public:
    long long factorSum(int N) {
        // Your code goes here
        long long sum=0;
        for(int i=1 ; i<=sqrt(N) ; i++)
          {
              if(N%i==0 && ( N/i != i)) sum+=i+N/i;
              else if (N%i==0 && ( N/i == i)) sum+=i;
          }
        return sum;
    }
};