// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_set<int> sets;
        vector<int> vecs;
        for(int i: arr){
            if(sets.find(i)==sets.end()){
                vecs.push_back(i);
                sets.insert(i);
            }
        }
        return vecs;
    }
};
