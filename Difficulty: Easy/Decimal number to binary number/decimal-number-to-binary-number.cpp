// User function Template for C++

string toBinary(int n) {
    // Your code here
     if(n==0) return"0";
    
    string binary="";
    while(n>0){
        binary=char('0'+n%2)+binary;
        n/=2;
    }
    return binary;
}