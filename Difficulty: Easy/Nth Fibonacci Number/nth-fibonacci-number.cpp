// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        int a = 0;
        int b = 1;
        int result = 0; 
        for (int i = 2; i <= n; ++i) {
            result = a + b;
            a = b;
            b = result;
        }
        return result;
    }
};