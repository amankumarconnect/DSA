class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i: nums){
            sum+=i;
        }
        int diff = ((n*(n+1))/2)-sum;
        unordered_set<int> sets;
        for(int i:nums){
            if(sets.find(i)!=sets.end()) return {i,i+diff};
            sets.insert(i);
        }
        return {};
    }
};
