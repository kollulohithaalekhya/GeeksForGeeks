// User function template for C++
class Solution {
  public:
    int findSum(vector<int>& arr) {
        // code here
        unordered_set<int> ans(arr.begin() , arr.end());
        return accumulate(ans.begin() , ans.end() , 0);
    }
};