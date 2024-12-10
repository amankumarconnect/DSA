class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = 0;
        vector<int> vecs;
        for(int i = 0; i<nums.size(); i++){
            n = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[i]>nums[j]) n++;
            }
            vecs.push_back(n);
        }
        return vecs;
    }
};
