// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.

class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
         int n=arr.size();
         for(int i=0;i<n;i++)
         {
             if(arr[i]==x)
             {
                 return i;
             }
         }
         return -1;
    }
};