class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
        }
        for (int i = n; i >= 1; i--) {
            for (int j = i; j < n; j++) {
                cout << " "; // Print leading spaces
            }
            for (int j = 1; j <= i; j++) {
                cout << "* "; // Print stars
            }
            cout << endl;
        }

    }
};