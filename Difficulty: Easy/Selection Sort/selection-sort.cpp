class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int i,j;
        int n = arr.size();
        int index;
        for(i = 0; i<n;i++){
            index = i;
            
            for(j = i+1; j<n; j++){
                
                if(arr[j] < arr[index]){
                index = j;
                }
                
            }
            swap(arr[i],arr[index]);
        }
    }
};