class Solution {
  public:
    // Function to find maximum odd subarray sum.
    int findMaxOddSum(vector<int> &arr) {
        // code here.
         int sum = 0, cnt = 0, n = arr.size();
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0 && arr[i] % 2 == 0) {
                sum+= arr[i];
            }
            else if(arr[i] % 2 != 0) cnt++;
        }
        while(cnt % 2 == 0) {
            cnt--;
        }
        sort(arr.begin(), arr.end());
        int maxm = arr[n - 1];
        for(int i = n - 1; i >= 0; i--) {
            if(arr[i] % 2 != 0 && cnt != 0) {
                sum += arr[i];
                if(sum % 2 != 0) maxm = max(sum, maxm);
                cnt--;
            }    
        }
        return maxm;
    }
};