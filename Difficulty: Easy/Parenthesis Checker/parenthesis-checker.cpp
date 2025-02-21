//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> S;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                S.push(s[i]);
            }
            else
            {
                if (S.empty()) return false;
                char p=S.top();
                if(p=='(' && s[i]==')'|| p=='{' && s[i]=='}' || p=='[' && s[i]==']')
                {
                    S.pop();
                }
                else
                {
                    
                    return false;
                }
            }
        }
        if(S.empty())
        return true;
        else
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends