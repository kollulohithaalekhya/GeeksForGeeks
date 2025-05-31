class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int decimal = 0;
        int length = b.size();
        for (int i = 0; i < length; i++) {
            if (b[length - i - 1] == '1') { 
                decimal += pow(2, i); 
            }
        }
        return decimal;
    }
};