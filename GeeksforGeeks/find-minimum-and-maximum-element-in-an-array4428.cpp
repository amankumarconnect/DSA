// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        pair<long long, long long> pairs;
        long long large = 1, small = pow(10,12);
        int n = arr.size();
        
        for(int i = 0; i<n; i++){
            large = max(large,arr[i]);
            small = min(small,arr[i]);
        }
        pairs.first = small;
        pairs.second = large;
        
        return pairs;
    }
};
