

class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // your code
         int sum1 = arr1[arr1.size()-1];
        int sum2 = 0;
        for(int i = 0; i < arr2.size(); i++)
        {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        return sum1 - sum2;
    }
};