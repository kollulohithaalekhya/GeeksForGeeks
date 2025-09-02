// User function Template for C++
bool notprime(int n)
{
    int k = sqrt(n);
    bool notprime = false;
    for (int i = 2; i <= k; i++)
    {
        if (n%i == 0)
        {
            notprime = true;
            break;
        }
    }
    return notprime;
}
int nextPrime(int n) {
     int k;
    n++;
    while(notprime(n))
    {
        n += 1;
    }
    return n;
    // code here to find next prime number
    // return next prime number
}