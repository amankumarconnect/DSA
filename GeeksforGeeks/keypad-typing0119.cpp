

//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    string str;
    for(char c:s){
        if(c>='a'&&c<='c') str+='2';
        else if(c>='d'&&c<='f') str+='3';
        else if(c>='g'&&c<='i') str+='4';
        else if(c>='j'&&c<='l') str+='5';
        else if(c>='m'&&c<='o') str+='6';
        else if(c>='p'&&c<='s') str+='7';
        else if(c>='t'&&c<='v') str+='8';
        else if(c>='w'&&c<='z') str+='9';
    }
    return str;
}
