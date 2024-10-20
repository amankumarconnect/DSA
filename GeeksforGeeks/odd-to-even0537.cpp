
class Solution{
    public:
    string makeEven(string s)
    {
        //code here.
        int even = -1;
        for(int i = 0; i<s.size(); i++){
            if((s[i]-'0')%2==0){
                even = i;
                if((s[i]-'0')<(s[s.size()-1]-'0')){
                    swap(s[i],s[s.size()-1]);
                    return s;
                }
            }
        }
        if(even>=0) swap(s[even],s[s.size()-1]);
        return s;
    }
};
