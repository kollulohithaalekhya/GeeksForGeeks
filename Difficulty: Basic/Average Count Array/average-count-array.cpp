
class Solution {
  public:
    vector<int> countArray(vector<int>& arr, int x) {
        // Complete the function
         vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i =0;i< arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        for(int i = 0;i< arr.size();i++)
        {
            int val = floor((arr[i] + x) / 2);
              if(mpp.find(val) != mpp.end())
                {
                    ans.push_back(mpp[val]);
                }
                else
                {
                    ans.push_back(0);
                }
        }
        return ans;
    }
};