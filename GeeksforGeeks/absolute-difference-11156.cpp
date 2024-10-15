class Solution {
  public:
  
    bool isabs(int n){
        if(n<10) return false;
        while(n>10){
            int l = n%10;
            n/=10;
            int m = n%10;
            if(abs(l-m)!=1) return false;
        }
        return true;
    }
  
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        vector<int> vecs;
        for(int i:arr){
            if(i<k&&isabs(i)) vecs.push_back(i);
        }
        return vecs;
    }
};
