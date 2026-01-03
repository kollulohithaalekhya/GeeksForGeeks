
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
         int n = arr.size();    
      int t = arr[k-1] ^ arr[n-k];
      arr[n-k] = t ^ arr[n-k];
      arr[k-1] = t ^ arr[k-1];
      return;
    }
};
