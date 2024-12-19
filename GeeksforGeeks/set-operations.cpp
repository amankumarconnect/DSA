//User function Template for C++


set<int> setInsert(int arr[],int n)
{
    set<int>s;
    
    //Your code here to insert arr into s
    for(int i = 0; i<n; i++){
        s.insert(arr[i]);
    }
    
    return s;
    
}


void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    for(auto i: s) cout<<i<<" ";
    cout<<endl;
}


void setErase(set<int>&s,int x)
{
   //write if condition here
   if(s.find(x)!=s.end()){
       s.erase(x);
       cout<<"erased "<<x;
   }
    
    //write else condition here
    else cout<<"not found";
    
    
    cout<<endl;
}
