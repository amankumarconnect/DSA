class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i<words.size(); i++){
            string word = words[i];
            int start = 0;
            int end = word.size() - 1;
            while(start<=end){
                if(word[start]!=word[end]){
                    break;
                }
                start++;
                end--;
            }
            if(start>end) return word;
        }
        return "";
    }
};
