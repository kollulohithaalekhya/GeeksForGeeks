// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int candidate = arr[n/2];  
        int count = 0;
        for (int num : arr) {
            if (num == candidate) {
                count++;
            }
        }
        if (count > n/2) {
            return candidate;
        }
        return -1;  
    }
};