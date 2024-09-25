

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
unordered_map<char,int> maps;
int count = 0;
for(char c: str1){
    maps[c]++;
}
for(char c: str2) maps[c]--;

for(char c: str1){
    if(maps[c]!=0){
        count += abs(maps[c]);
        maps[c] = 0;
    }
}
for(char c: str2){
    if(maps[c]!=0){
        count += abs(maps[c]);
        maps[c] = 0;
    }
}
return count;
}
