class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> vecs;
        int index = 0;
        for(int i = 1; i<=target[target.size()-1]; i++){
            vecs.push_back("Push");
            if(i != target[index]){
                vecs.push_back("Pop");
            } else{
                index++;
            }
        }
        return vecs;
    }
};
