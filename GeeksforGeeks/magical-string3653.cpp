class Solution{   
public:
    string magicalString(string S){
        // code here 
        for(int i = 0; i<S.size(); i++){
            S[i] = 'a' + (25-(S[i]-'a'));
        }
        return S;
    }
};
