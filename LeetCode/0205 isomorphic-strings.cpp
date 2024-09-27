class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1;
        unordered_map<char,int> map2;
        for(int i = 0; i<s.size(); i++){
            if(map1[s[i]]&&map1[s[i]]!=t[i]) return false;
            if(!map1[s[i]]&&map2[t[i]]) return false;
            map1[s[i]] = t[i];
            map2[t[i]]++;
        }
        return true;
    }
};
