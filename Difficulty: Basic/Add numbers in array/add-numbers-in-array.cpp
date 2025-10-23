//User function Template for C++

class Solution{
    public:
    long long get_Sum(int n,vector<int>&input)
    {
        //your code here
        long long res{};
    for (int it: input)
      res += it;
    return res;
    }
};
