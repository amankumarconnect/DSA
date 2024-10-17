class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int> maps;
        for(int i: nums) maps[i]++;
        for(int i:nums){
            if(maps[i]==1) sum+=i;
        }
        return sum;
    }
};
