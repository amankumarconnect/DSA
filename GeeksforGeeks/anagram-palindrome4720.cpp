

int isPossible (string S)
{
    // your code here
    unordered_map<char,int> maps;
    int count = 0;
    for(char c: S){
        if(maps[c]){
            maps[c]--;
            count--;
        }
        else{
            maps[c]++;
            count++;
        }
    }
    return count<=1;
}
