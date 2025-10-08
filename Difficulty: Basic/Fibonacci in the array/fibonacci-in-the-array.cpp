class Solution {
  public:
    bool fib(long long int X){
        int a=0;
        int b=1;
        if(X==0||X==1)
            return 1;
        else{
            while(a+b<=X){
                if(X==a+b)
                    return 1;
                int k=a;
                a=b;
                b+=k;
            }
        }
        return  0;
    }
    int countFibonacciNumbers(vector<long long>& arr) {
        // code here
          int fibonum=0;
        for(auto X:arr){
          if(fib(X))
            fibonum++;
        }
        return fibonum;
    }
};
