class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> maps;
        for(int i: nums){
            maps[i]++;
        }
        vector<int> vecs;
        for(auto j: maps){
            if(j.second==1) vecs.push_back(j.first);
        }
        return vecs;
    }
};
