// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        // code here
        if(arr.size()==1){
                cout<< arr[0] << " ";
                return;
            }
            int temp=arr[arr.size()-1];
            arr.pop_back();
            printArray(arr);
            cout << temp << " ";
            return;
    }
};