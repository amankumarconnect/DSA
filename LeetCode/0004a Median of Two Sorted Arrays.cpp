class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       nums1.insert(nums1.end(),nums2.begin(),nums2.end());
       sort(nums1.begin(),nums1.end());
       int n = nums1.size();
       int half = n/2;
       double median;
       if(n%2==0){
        median = (nums1[half]+nums1[half-1])/2.0;
       }
       else{
        median = nums1[half];
       }
       return median;
    }
};
