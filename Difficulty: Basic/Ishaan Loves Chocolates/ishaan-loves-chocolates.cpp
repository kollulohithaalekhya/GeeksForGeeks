class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
         int start = 0, end = n-1;
        int smallest = arr[0];
        while(start <= end){
            if(arr[start] < smallest) smallest = arr[start];
            if(arr[end] < smallest)  smallest = arr[end];
            start++;
            end--;
        }
        return smallest;
    }
};
