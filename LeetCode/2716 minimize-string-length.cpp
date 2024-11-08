class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> sets;
        for (char c : s) {
            sets.insert(c);
        }
        return sets.size();
    }
};
