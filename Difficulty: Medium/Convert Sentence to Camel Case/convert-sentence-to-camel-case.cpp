// User function Template for C++

class Solution {
  public:
    // Function to convert the given string to Camel Case
    string convertToCamelCase(string& s) {
        // code here
        string res = "";
        bool capitalizeNext = false;
        for(int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                capitalizeNext = true;
            }
            else if (capitalizeNext == true) {
                res += toupper(s[i]);
                capitalizeNext = false;
            }
            else {
                res += s[i];
            }
        }
        return res;
    }
};
