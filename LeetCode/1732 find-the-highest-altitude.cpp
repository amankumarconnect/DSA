class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int> vecs(gain.size() + 1);
       vecs[0] = 0;
       for(int i = 0; i<gain.size(); i++){
        vecs[i+1] = vecs[i]+gain[i];
       } 
       int maxi = INT_MIN;
       for(int i: vecs){
        if(i>maxi) maxi = i;
       }
       return maxi;
    }
};
