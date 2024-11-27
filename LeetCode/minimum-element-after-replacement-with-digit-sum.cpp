class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        int sum;
        for(int i: nums){
            sum = 0;
            while(i){
                sum += i%10;
                i/=10;
            }
            if(sum<min) min = sum;
        }
        return min;
    }
};
