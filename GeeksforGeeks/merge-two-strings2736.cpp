


string merge (string S1, string S2)
{
    // your code here
    string str;
    int n = max(S1.size(),S2.size());
    for(int i = 0; i<n; i++){
        if(i<S1.size()) str+=S1[i];
        if(i<S2.size()) str+=S2[i];
    }
    return str;
}
