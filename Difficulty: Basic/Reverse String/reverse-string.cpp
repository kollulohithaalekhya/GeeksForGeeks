// User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string &s) {
    // code here
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
    return s;
}