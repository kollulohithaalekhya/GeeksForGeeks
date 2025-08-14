

class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
           int n = arr.size();
        vector<int> pos, neg, res;
        for(int i=0; i<n; i++){
            if(arr[i] < 0){
                neg.push_back(arr[i]);
            }else{
                pos.push_back(arr[i]);
            }
        }
        int i = 0, j = 0;
        while(i < pos.size() && j < neg.size()){
            res.push_back(pos[i]);
            res.push_back(neg[j]);
            i++; j++;
        }
        while(i < pos.size()){
            res.push_back(pos[i]);
            
            i++; 
        }
        while(j < neg.size()){
            res.push_back(neg[j]);
            
            j++; 
        }
        
        return res;
    }
};