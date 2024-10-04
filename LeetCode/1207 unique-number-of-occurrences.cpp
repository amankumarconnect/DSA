class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> maps1;
        vector<int> vecs;
        for(int i:arr) maps1[i]++;
        for(int i:arr){
            if(maps1[i]){
                vecs.push_back(maps1[i]);
                maps1[i]=0;
            }
        }
        unordered_map<int,int> maps2;
        for(int i:vecs) maps2[i]++;
        for(int i:vecs){
            if(maps2[i]>1) return false;
        }
        return true;
    }
};
