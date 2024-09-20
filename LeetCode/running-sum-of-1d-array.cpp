class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> vecs;
        for(int i: nums){
            sum+=i;
            vecs.push_back(sum);
        }
        return vecs;
    }
};
