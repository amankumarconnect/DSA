  
class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
        string str;
        for(char c:S){
            if(c=='1') str+='0';
            else str+='1';
        }
        return str;
    }
};
