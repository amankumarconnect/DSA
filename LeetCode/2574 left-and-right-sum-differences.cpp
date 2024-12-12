class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum, rightSum;
        int lefti = 0, righti = 0;
        for(int i = 0; i<nums.size(); i++){
            lefti = 0;
            righti = 0;
            for(int j = 0; j<i; j++){
                lefti+=nums[j];
            }
            leftSum.push_back(lefti);
            for(int k = i+1; k<nums.size(); k++){
                righti+=nums[k];
            }
            rightSum.push_back(righti);
        }
        vector<int> vecs;
        for(int i = 0; i<leftSum.size(); i++){
            vecs.push_back(abs(leftSum[i]-rightSum[i]));
        }
        return vecs;
    }
};
