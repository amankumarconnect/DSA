
class Solution{
    public:
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
    string str;
    for(char c:s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            str+=c;
        }
    }
    if(str=="") return "No Vowel";
    return str;
    }
};
