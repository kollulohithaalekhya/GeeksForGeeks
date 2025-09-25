// User function Template for C++
class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
         for(auto vr : mat){
            for(auto ele : vr){
                if(ele == x)
                    return true;
            }
        }
        return false;
    }
};