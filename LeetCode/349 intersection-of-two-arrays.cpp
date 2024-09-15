class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> sets(nums1.begin(),nums1.end());
        vector<int> vecs;
        for(int i = 0; i<nums2.size(); i++){
            if(sets.erase(nums2[i])){
                vecs.push_back(nums2[i]);
            }
        }
        return vecs;
    }
};
