// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        string str;
        int hash[257];
        for(int i = 0; i<257; i++) hash[i] = 0;
        for(char c: string2) hash[c]++;
        for(char c: string1){
            if(!hash[c]) str+=c;
        }
        return str;
    }
};
