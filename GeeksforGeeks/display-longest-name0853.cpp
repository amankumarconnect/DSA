
class Solution {
  public:
    string longest(vector<string> &names) {
        // code here
        int n = names.size();
        vector<int> arr(n);
        int maxi = 0;
        int index = 0;
        for(int i = 0; i<n; i++){
            if(names[i].size()>maxi){
                maxi = names[i].size();
                index = i;
            }
        }
        return names[index];
    }
};
