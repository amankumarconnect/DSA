

class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
        int p = 0, n = 0;
        vector<int> vecs;
        while(p<arr.size()&&n<arr.size()){
            if(arr[p]>=0&&arr[n]<0){
                vecs.push_back(arr[p]);
                vecs.push_back(arr[n]);
                p++;
                n++;
            }
            if(arr[p]<0) p++;
            if(arr[n]>=0) n++;
        }
        return vecs;
    }
};
