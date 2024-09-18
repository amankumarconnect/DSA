

// Return true if str is binary, else false
bool isBinary(string str)
{
   // Your code here
   for(int i = 0; i<str.size(); i++){
       if(str[i]!='1'&&str[i]!='0') return false;
   }
   return true;
}
