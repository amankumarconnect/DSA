class Solution
{
public:
    void printFloydTriangle(int N)
    {
        // Write Your Code here
        int n = 1;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<=i; j++){
                cout<<n<<" ";
                n++;
            }
            cout<<endl;
        }
    }
};
