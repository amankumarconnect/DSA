class Solution {
public:
    int thirdMax(vector<int>& nums) {
       long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
       bool flag = false;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>first){
                third = second;
                second = first;
                first = nums[i];
            }
            if(nums[i]>second&&nums[i]<first){
                third = second;
                second = nums[i];
            }
            if(nums[i]>third&&nums[i]<second){
                third = nums[i];
            }
        }
        if(nums.size()<3||third==LONG_MIN) return first;
        else return third; 
    }
};
