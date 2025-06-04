#include <iostream>
#include <string>
using namespace std;
void TypeCastAndDouble(string num) {
    int convertedNum = stoi(num);
    cout << convertedNum * 2 << endl;
}

int main() {
    string num;
    getline(cin, num);
    // TypeCast to int double it and print
    TypeCastAndDouble(num);
    return 0;
}
