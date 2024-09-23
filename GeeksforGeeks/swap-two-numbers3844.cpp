//User function Template for C++

class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        a = (long)a*b/(b = a);
        return {a,b};
    }
};
