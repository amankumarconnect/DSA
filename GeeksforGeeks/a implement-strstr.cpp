

//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     return s.find(x)>=0 ? s.find(x) : -1;
}
