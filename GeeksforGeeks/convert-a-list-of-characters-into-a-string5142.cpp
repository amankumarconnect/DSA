
class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string str;
        for(int i = 0; i<n; i++){
            str+=arr[i];
        }
        return str;
    }
};
