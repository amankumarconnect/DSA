

//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    vector<int> vecs;
    while(!s.empty()){
        vecs.push_back(s.top());
        s.pop();
    }
    for(int i: vecs) s.push(i);
    
    int size = 0;
    if(vecs.size()&1) size = vecs.size()-1;
    else size = vecs.size();

    for(int i = 1; i<size; i++){
        if(abs(vecs[i]-vecs[i-1])!=1) return false;
    }
    return true;
}
