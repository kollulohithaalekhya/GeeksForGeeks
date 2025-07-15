class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int r=0;
        for (char c : s) {
            int digit=c-'0';
            r=(r* 10+digit)%13;
        }
        return r==0;
    }
};