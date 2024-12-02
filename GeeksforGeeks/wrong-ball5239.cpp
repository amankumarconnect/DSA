

int countWrongPlacedBalls(string s)
{
    //code here.
    int count = 0;
    for(int i = 0; i<s.size(); i++){
        if(!(i&1)&&s[i]=='B') count++;
        else if((i&1)&&s[i]=='R') count++;
    }
    return count;
}
