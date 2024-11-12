class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26] = {0};
        for(char c: allowed) arr[c-'a']++;
        int count = 0;
        for(string s:words){
            bool bb = true;
            for(char c: s){
                if(arr[c-'a']==0){
                    bb = false;
                    break;
                }
            }
            if(bb) count++;
        }
        return count;
    }
};
