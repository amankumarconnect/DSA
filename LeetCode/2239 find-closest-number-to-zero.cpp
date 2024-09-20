class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min = INT_MAX;
        for(int i:nums){
            if((abs(i)<abs(min))||(abs(i)==abs(min)&&min<i)) min = i;
        }
        return min;
    }
};
