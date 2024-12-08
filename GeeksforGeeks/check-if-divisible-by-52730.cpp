class Solution{   
public:
    int divisibleBy5(string N){
        // code here
        int s = N.size()-1;
        return (N[s]=='5'||N[s]=='0');
    }
};
