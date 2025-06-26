// User function Template for C++

void square(int s) {
    // code here
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(i==0 || i==s-1 || j==0 || j==s-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
