class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.length();
        if(!n){
            return 0;
        }

        for(int i =0; i<n;i++){
            for(int j =i; j<n;j++){
                if(checkRepetitions(s,i,j)){
                    ans = max(ans, j-i+1);
                }
            }
        }
        return ans;
    }

    bool checkRepetitions(string s, int start, int end){
        unordered_set<char> setu;
        for(int i = start; i<=end; i++){
            char c = s[i];
            if(setu.count(c)){
                return false;
            }
            setu.insert(c);
        }
        return true;
    }
};
