class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n<2)
        {
            return false;
        }
        else{
            for(int i=2;i<=(int)sqrt(n);i++)
            {
                if(n%i==0) return false;
            }
            return true;
        }
    }
};
