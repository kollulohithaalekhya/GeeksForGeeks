class Solution {
  public:
    string isStringExist(vector<string> arr, int N, string S) {
        // code here
         for( int i = 0 ; i<N ; i++)
       {
           int count = 0 ;
           if(S.size()==arr[i].size())
           {
               for( int j = 0 ; j<S.size() ; j++)
               {
                   if(S[j]!=arr[i][j])
                   {
                       count++ ;
                   }
               }
               
               if(count==1)
               {
                   return "True" ;
               }
           }
       }
       
       return "False" ;
    }
};