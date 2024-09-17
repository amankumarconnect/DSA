

//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int lenx = x.size();
     int lens = s.size();
     
     int i = 0;

     for(int i = 0; i<lens; i++){
         if(s[i]==x[0]){
             int temp = i;
             for(int j =0; j<lenx; j++,temp++){
                 if(s[temp]!=x[j]){
                     break;
                 }
                 if(j == lenx-1 && s[temp] == x[j]){
                     return i;
                 }
                 
             }
         }
     }
     return -1;
}
