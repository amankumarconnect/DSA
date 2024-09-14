class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, k = 0;
        int m = nums1.size();
        int n = nums2.size();
        int idx1 = ((m + n) / 2) - 1;
        int idx2 = (m + n) / 2;
        int element1, element2;

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                if (k == idx1) {
                    element1 = nums1[i];
                } else if (k == idx2) {
                    element2 = nums1[i];
                }
                i++;
                k++;
            } else {
                if (k == idx1) {
                    element1 = nums2[j];
                } else if (k == idx2) {
                    element2 = nums2[j];
                }
                j++;
                k++;
            }
        }

        while(i<m){
            if (k == idx1) {
                    element1 = nums1[i];
                } else if (k == idx2) {
                    element2 = nums1[i];
                }
                i++;
                k++;
        }

        while(j<n){
            if (k == idx1) {
                    element1 = nums2[j];
                } else if (k == idx2) {
                    element2 = nums2[j];
                }
                j++;
                k++;
        }

        if ((m + n) % 2 == 0) {
            return (element1 + element2) / 2.0;
        }
        return element2;
    }
};
