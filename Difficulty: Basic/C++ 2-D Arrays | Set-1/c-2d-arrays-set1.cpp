vector<vector<int>> transpose(int a[][M], int n) {
    // Code here
    vector<vector<int>> result(M, vector<int>(n));  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < M; j++) {  
            result[j][i] = a[i][j];  
        }  
    }  
    return result; 
}
