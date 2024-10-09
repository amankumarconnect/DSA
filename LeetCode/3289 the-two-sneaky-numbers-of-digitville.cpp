class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> maps;
        vector<int> vecs;
        for(int i: nums) maps[i]++;
        for(int i: nums){
            if(maps[i]==2){
                vecs.push_back(i);
                maps[i]=0;
            }
        }
        return vecs;
    }
};
