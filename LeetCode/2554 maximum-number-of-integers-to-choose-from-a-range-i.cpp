class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       unordered_map<int,int> maps;
       int sum = 0;
       int count = 0;
       for(int i:banned){
        maps[i]++;
       }

       for(int i = 1; i<=n; i++){
        if(maps[i]>0) continue;
        if(sum+i>maxSum) return count;
        sum+=i;
        count++;
       }
       return count;
    }
};
