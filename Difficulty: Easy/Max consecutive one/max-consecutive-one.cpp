//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int maxConsecutiveCount(vector<int> &arr) {
        // code here
        int c=0,p=INT_MIN,o=0,z=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
            {
                c+=1;
                z=max(o,z);
                o=0;
                
            }
            else
            {
                o+=1;
                p=max(p,c);
                c=0;
            }
        }
        p= max(p,c);
        z=max(z,o);
        return max(p,z);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.maxConsecutiveCount(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends