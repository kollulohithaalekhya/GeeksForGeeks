class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
        // code here
         unordered_map<int, int> freq;
        // Count frequency of each element
        int n=arr.size();
        for (int i = 0; i < n; i++)
            freq[arr[i]]++;
    
        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;
    
        for (auto it : freq) {
            maxFreq = max(maxFreq, it.second);
            minFreq = min(minFreq, it.second);
        }
    
        // If all elements are the same, difference is 0
        if (freq.size() == 1)
        return 0;
        else
        return maxFreq-minFreq;

    }
};