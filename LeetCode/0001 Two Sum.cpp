class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> hashTable;

        for(int i = 0; i<n;i++){
            int complement = target - nums[i];
            if(hashTable.count(complement) && (hashTable[complement] != i)) {
                return {i,hashTable[complement]};
            }
            hashTable[nums[i]] = i;
        }
        return {};
    }
};
