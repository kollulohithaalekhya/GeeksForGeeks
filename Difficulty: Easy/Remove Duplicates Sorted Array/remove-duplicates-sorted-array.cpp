class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ans;
     int j=0;
     ans.push_back(arr[0]);
     for(int i=1;i<arr.size();i++){
         if(arr[i]!=arr[j]){
             ans.push_back(arr[i]);
             j=i;
         }
     }
     return ans;
    }
};