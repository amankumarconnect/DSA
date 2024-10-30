

//User function Template for C++

int findLength(string s){
    //code
    int i = s.size() - 1;
    int count = 0;
    
    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    
    // Count the characters of the last word
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }
    
    return count;
}
