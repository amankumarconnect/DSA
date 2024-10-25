

/*method prints the given pattern in a single line */
void printPattern(string s)
{
   //Your code here
   int n = s.size();
   int mid = n/2;
   string str;
   for(int i = mid; i<s.size(); i++){
       str+=s[i];
       cout<<str<<"$ ";
   }
   for(int i = 0; i<mid; i++){
       str+=s[i];
       cout<<str<<"$ ";
   }
}
