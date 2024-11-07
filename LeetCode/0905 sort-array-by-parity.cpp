class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        while(s<e){
            if((nums[e]%2==0)&&(nums[s]%2!=0)){
                swap(nums[s],nums[e]);
                s++;
                e--;
            }
            if(nums[e]%2!=0) e--;
            if(nums[s]%2==0) s++;
        }
        return nums;
    }
};
