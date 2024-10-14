class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0, n = 0;
        vector<int> vecs;
        while(p<nums.size()&&n<nums.size()){
            if(nums[p]>=0&&nums[n]<0){
                vecs.push_back(nums[p]);
                vecs.push_back(nums[n]);
                p++;
                n++;
                continue;
            }
            if(nums[p]<0) p++;
            if(nums[n]>=0) n++;
        }
        return vecs;
    }
};
