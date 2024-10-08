class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n+1);
        nums[0]=0;
        if(n!=0){
            nums[1]=1;
        }
        for(int i = 2; i<n+1; i++){
            if(i&1){
                nums[i] = nums[i/2]+nums[(i/2)+1];
            }
            else {
                nums[i] = nums[i/2];
            }
        }
        int max= INT_MIN;
        for(int i:nums){
            if(i>max) max = i;
        }
        return max;
    }
};
