class Solution {
    // code here
    public int countCoPrime(int[] arr) {
        int count = 0;
        for(int i=0; i<arr.length-1; i++){
            if(!check_Gcd(arr[i], arr[i+1])){
                count++;
            }
        
        }
        return count;
    }
    private boolean check_Gcd(int n, int m){
        while (m != 0) {
            int temp = m;
            m = n % m;
            n = temp;
        }
        if(n==1){
            return true;
        }
        return false;
    }
}