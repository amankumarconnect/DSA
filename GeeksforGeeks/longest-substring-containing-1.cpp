

int maxlength( string s)
{
// your code here
int size = 0;
int temp = 0;
for(int i = 0; i<s.size(); i++){
    if(s[i]=='1'){
        temp++;
    }
    else{
        size = max(temp,size);
        temp = 0;
    }
}
if(temp) size = max(size,temp);
return size;
}
