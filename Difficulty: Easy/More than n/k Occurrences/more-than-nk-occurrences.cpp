//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        int count=0;
        for (auto it : mpp) {
            if (it.second > ((arr.size())/ k)) {
                count++;
            }
        }

        return count;

    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.countOccurence(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends