

vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
    vector<vector<int>> vecs(n, vector<int>(n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            vecs[i][j] = a[j][i];
        }
    }
    return vecs;
}
