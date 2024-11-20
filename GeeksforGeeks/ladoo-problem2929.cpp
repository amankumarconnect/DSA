//User function Template for C++

class Solution {
  public:
    int divideLadoo(int N ,int A[]) {
        // code here
        int count = 0;
        unordered_map<int,int> maps;
        for(int i = 0; i<N; i++){
            if(maps[A[i]]) continue;
            count++;
            maps[A[i]]++;
        }
        return count;
    }
};
