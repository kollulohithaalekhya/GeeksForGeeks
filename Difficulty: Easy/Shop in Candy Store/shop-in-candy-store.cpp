class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
         int n=prices.size();
        
        sort(prices.begin(), prices.end());
        
        int st=0, end=n, mini=0;
        while(st<end){
            mini+=prices[st];
            end-=k;
            st++;
        }
        int maxi=0;
        st=-1;
        end=n-1;
        while(st<end){
            maxi+=prices[end];
            st+=k;
            end--;
        }
        
        return {mini, maxi};
    }
};