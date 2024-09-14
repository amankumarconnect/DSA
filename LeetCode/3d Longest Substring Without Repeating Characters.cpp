class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vecs(128,-1);
        int res = 0;
        int n = s.length();
        int i = 0;

        for(int j = 0; j<n; j++){
            char c = s[j];
            int index = vecs[c];
            if(index!=-1){
                i = max(i, index+1);
            }
            res = max(res, j-i+1);
            vecs[c] = j;
        }
        return res;
    }
};
