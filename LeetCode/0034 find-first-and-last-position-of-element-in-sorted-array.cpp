class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();

        int first = -1, last = -1;
        if(nums.size()==0){
            return {-1,-1};
        }
        int left = 1, right = n-1, mid = 0;
        if(nums[0] == target) first = 0;
        else{
            while(left<=right){
                mid = left + (right-left)/2;
                if(nums[mid]==target&&nums[mid-1]!=target){
                    first = mid;
                    break;
                }
                if(nums[mid]>=target) right = mid-1;
                else left = mid+1;
            }
        }

        left = 0;
        right = n-2;
        if(nums[n-1]==target) last = n-1;
        else{
            while(left<=right){
                mid = left + (right-left)/2;
                if(nums[mid]==target&&nums[mid+1]!=target){
                    last = mid;
                    break;
                }
                if(nums[mid]<=target) left=mid+1;
                else right=mid-1;
            }
        }
        return {first,last};
    }
};
