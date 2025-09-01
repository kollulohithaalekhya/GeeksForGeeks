class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
               sum=sum+arr[j];
               if(sum==target){
                   ans.push_back(i+1);
                   ans.push_back(j+1);
                   return ans;
               }
            }
        }
        return {-1};
    }
};