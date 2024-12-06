class Solution {
public:
    string interpret(string command) {
        string str;
        string ans;
        for(char c: command){
            str+=c;
            if(str=="G"){
                ans+="G";
                str = "";
            }
            else if(str=="()"){
                ans+="o";
                str = "";
            }
            else if(str=="(al)"){
                ans+="al";
                str = "";
            }
        }
        return ans;
    }
};
