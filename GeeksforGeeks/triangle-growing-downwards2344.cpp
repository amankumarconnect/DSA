class Solution
{
public:
    void printTriangleDownwards(string str)
    {
        // Write Your Code here
        for(int i = 0; i<str.size(); i++){
            for(int j = 1; j<(str.size()-i); j++) cout<<".";
            for(int k = 0; k<=i; k++){
                cout<<str[k];
            }
            cout<<endl;
        }
    }
};
