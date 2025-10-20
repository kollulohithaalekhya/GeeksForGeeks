// User function Template for C++

class Solution {
  public:
    int largest(int arr[], int n) {
        // code here
         int largest=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
    }
};
