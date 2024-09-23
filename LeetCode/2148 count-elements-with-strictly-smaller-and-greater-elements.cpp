class Solution {
public:
    int countElements(vector<int>& nums) {
        int small = INT_MAX, large = INT_MIN;
        for(int i:nums){
            if(i>large) large =i;
            if(i<small) small =i;
        }
        int count = 0;
        for(int i:nums){
            if(i!=small&&i!=large) count++;
        }
        return count;
    }
};
