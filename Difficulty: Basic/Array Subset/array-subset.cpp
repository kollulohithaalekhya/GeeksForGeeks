class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        int n=b.size();
       unordered_map<int,int>mp;
       for(int i=0;i<a.size();i++)
       {
           mp[a[i]]++;
       }
       for(int i=0;i<n;i++)
       {
           int v=b[i];
           if(mp[v]==0)return false;
           mp[v]--;
       }
       return true;
    }
};