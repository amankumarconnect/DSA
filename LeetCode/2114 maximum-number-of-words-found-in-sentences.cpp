class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(string s: sentences){
            int count = 0;
            for(char c: s){
                if(c==' ') count++;
            }
            maxi = max(maxi, count+1);
        }
        return maxi;
    }
};
