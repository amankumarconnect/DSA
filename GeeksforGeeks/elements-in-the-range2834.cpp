class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        unordered_map<int,int> maps;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(!maps[arr[i]]&&arr[i]>=A&&arr[i]<=B){
                count++;
                maps[arr[i]]++;
            }
        }
        return count == B-A+1;
    }
};
