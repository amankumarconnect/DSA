class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> avg;
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size()-1;
        while(i<=j){
            double a = ((double)(nums[i]+nums[j])/2);
            avg.push_back(a);
            i++;
            j--;
        }
        double mini = avg[0];
        for(double i:avg){
            if(i<mini) mini = i;
        }
        return mini;
    }
};
