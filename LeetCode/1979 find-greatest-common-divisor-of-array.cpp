class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = INT_MAX, max = INT_MIN;
        for(int i: nums){
            if(i<min) min = i;
            if(i>max) max = i;
        }
        while(min!=max){
            if(min>max) min-=max;
            else max-=min;
        }
        return min;
    }
};
