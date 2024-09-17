class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       int n = words.size();
        for(int i = 0; i<n; i++){
            string temp = words[i];
            string rev = "";
            int size = temp.size();
            while(size){
                rev += temp[size-1];
                size--;
            }
            if(words[i]==rev) return rev;
        }
        return ""; 
    }
};
