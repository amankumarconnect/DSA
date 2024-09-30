// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> vecs;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                vecs.push_back(Mat[i][j]);
            }
        }
        sort(vecs.begin(),vecs.end());
        int k = 0;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                Mat[i][j] = vecs[k];
                k++;
            }
        }
        return Mat;
    }
};
