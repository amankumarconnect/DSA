class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxn = INT_MIN;
        for(int i: candies){
            if(i>maxn) maxn = i;
        }
        vector<bool> vecb;
        for(int i: candies){
            vecb.push_back(i+extraCandies>=maxn);
        }
        return vecb;
    }
};
