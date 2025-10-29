class Solution {
  public:
    int altProduct(vector<int>& arr) {
        // Your code goes here
         sort(arr.begin(),arr.end());
        int i =0;
        int j = arr.size()-1;
        int sum = 0;
        while(i < j)
        {
           int mul = arr[i] * arr[j];
           sum += mul;
           i++;
           j--;
        }
        return sum;
    }
};