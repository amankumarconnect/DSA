class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int n = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='6'){
                n = 3*pow(10,(s.size()-i-1));
                break;
            }
        }
        return num+n;
    }
};
