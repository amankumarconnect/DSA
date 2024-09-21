class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for(int i: nums) sum+=i;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            if((sum2*2+nums[i])==sum) return i;
            sum2+=nums[i];
        }
        return -1;
    }
};
