class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int small1 = INT_MAX;
        int small2 = INT_MAX;
        for(int i: arr){
            if(i<small1){
                small2 = small1;
                small1 = i;
            }
            else if(i<small2&&i!=small1) small2 = i;
        }
        if(small2!=INT_MAX) return {small1,small2};
        else return {-1};
    }
};
