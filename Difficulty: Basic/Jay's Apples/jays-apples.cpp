// User function Template for C++

class Solution {
  public:
    int minimumApple(vector<int>& arr) {
        // Complete the function
         unordered_set<int> us;
      for(int x: arr)
        us.insert(x);
      return us.size();    
    }
};
