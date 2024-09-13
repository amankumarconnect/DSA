class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> maps;
        int left = 0, right = 0;
        int n = s.length();
        int ans = 0;

        while(right<n){
            char r = s[right];
            maps[r]++;

            while(maps[r]>1){
                char l = s[left];
                maps[l]--;
                left++;
            }
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};
