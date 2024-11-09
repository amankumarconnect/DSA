class Solution {
public:
    bool isGood(vector<int>& nums) {
        int arr[201] {0};
        for(int i:nums) arr[i]++;
        for(int i = 1; i<nums.size()-1; i++){
            if(arr[i]!=1) return false;
        }
        if(arr[nums.size()-1]!=2) return false;
        return true;
    }
};
