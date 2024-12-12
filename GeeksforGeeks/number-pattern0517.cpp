class Solution
{
public:
    vector<string> numberPattern(int N)
    {
        // Write Your Code here
        vector<string> vecs;
        for(int i = 1; i<=N; i++){
            string str;
            for(int j = 1; j<=i; j++){
                str+=to_string(j);
            }
            for(int j = i-1; j>=1; j--){
                str+=to_string(j);
            }
            vecs.push_back(str);
        }
        return vecs;
    }
};
