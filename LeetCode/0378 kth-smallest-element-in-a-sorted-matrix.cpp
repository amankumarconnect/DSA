class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> vecs;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix.size(); j++){
                vecs.push_back(matrix[i][j]);
            }
        }
        sort(vecs.begin(),vecs.end());
        return vecs[k-1];
    }
};
