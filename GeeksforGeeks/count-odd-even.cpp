// User function Template for C++

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    vector<int> countOddEven(vector<int> &arr) {
        // your code here
        int odd = 0, even = 0;
        for(int i: arr){
            if(i&1) odd++;
            else even++;
        }
        return {odd,even};
    }
};
