class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        unordered_map<int,int> maps;
        for(int i:arr) maps[i]++;
        for(int i:arr){
            if(maps[i]%k!=0) return i;
        }
        return 0;
    }
};
