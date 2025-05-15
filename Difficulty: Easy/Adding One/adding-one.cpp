//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        int c= 1;
        for(int i = arr.size() - 1; i >= 0; i--) {
            int sum = arr[i] + c;
            arr[i] = sum % 10;
            c = sum / 10;
        }
        if(c) {
            arr.insert(arr.begin(), c);
        }
        return arr;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        Solution ob;
        vector<int> result = ob.addOne(nums);

        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends