class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        vector <int> res;
        res.push_back(A+B);
        res.push_back(A*B);
        res.push_back(A>B?A-B:B-A);
        res.push_back(A>B?A/B:B/A);
        return res;
    }
};