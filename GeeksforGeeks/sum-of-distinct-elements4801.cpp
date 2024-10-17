// User function template for C++
class Solution {
  public:
    int findSum(vector<int>& arr) {
        // code here
        int sum = 0;
        unordered_set<int> sets;
        for(int i: arr){
            if(sets.find(i)==sets.end()){
                sum+=i;
                sets.insert(i);
            }
        }
        return sum;
    }
};
