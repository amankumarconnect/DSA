// User function Template for C++
class Solution {
  public:
    string conRevstr(string S1, string S2) {
        // code here
        string str = S1+S2;
        int left = 0, right = str.size()-1;
        while(left<right){
            swap(str[left],str[right]);
            left++;
            right--;
        }
        return str;
    }
};
