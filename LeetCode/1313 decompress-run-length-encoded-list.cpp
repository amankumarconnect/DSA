class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i = 0, j = 1;
        vector<int> vecs;
        while(j<nums.size()){
            for(int k = 0; k<nums[i]; k++){
                vecs.push_back(nums[j]);
            }
            i+=2;
            j+=2;
        }
        return vecs;
    }
};
