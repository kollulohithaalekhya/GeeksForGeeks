class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i=0, j=0, k=0;
        vector<int>ans;
        
        while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
            if(arr1[i]==arr2[j] && arr1[i]==arr3[k]){
                if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);       
                }
                 i++, j++, k++;
            }


            else if(arr1[i]<arr2[j]) i++;


            else if(arr2[j]<arr3[k]) j++;


            else k++;
        }
        
        return ans;
    }
};