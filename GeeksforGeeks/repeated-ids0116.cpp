// User function Template for C++
class Solution {
  public:
    vector<int> uniqueId(vector<int>& arr) {
        // code
        unordered_map<int, int> maps;
        vector<int> vecs;
        for(int i: arr){
            if(maps[i]!=1) vecs.push_back(i);
            maps[i] = 1;
        }
        return vecs;
    }
};
