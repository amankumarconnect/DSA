

string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int> maps;
    int count = 0;
    
    for(int i =0; i<n; i++){
        if(i<n){
            maps[a1[i]]++;
            if(maps[a1[i]] == 0){
                count++;
            }
        }
        if(i<m){
            maps[a2[i]]--;
            if(maps[a2[i]] == 0){
                count++;
            }
        }
    }
    if(count==m){
        return "Yes";
    } else{
        return "No";
    }
}
