class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        vector<int>result;
        set<int>unique;
        for(auto i:arr1){
            unique.insert(i);
        }
        for(auto i: arr2){
            unique.insert(i);
        }
        for(auto i:unique){
            result.push_back(i);
        }
      sort(result.begin(),result.end());
    return result;
    }
};