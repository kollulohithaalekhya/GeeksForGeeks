// User function Template for C++

void difference(int n1, int n2) {

    // Write your code here
    for (int i = 1; i <= 10; ++i) {
        cout << (n1 * i - n2 * i);
        if (i < 10) cout << " ";
    }
}