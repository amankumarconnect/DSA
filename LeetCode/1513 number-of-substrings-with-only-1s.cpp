class Solution {
public:
    int numSub(string s) {
        int temp = 0;
        long long ans = 0;
        int mod = 1e9 + 7;
        for(int i = 0; i<s.size();i++){
            if(s[i]=='1'){
                temp++;
                ans+= temp;
            }
            else temp = 0;
        }
        return ans%mod;
    }
};
