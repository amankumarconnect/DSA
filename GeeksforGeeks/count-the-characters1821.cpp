
class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
            unordered_map<char,int> maps;
            maps[S[0]]++;
            for(int i = 1; i<S.size(); i++){
                if(S[i]!=S[i-1]) maps[S[i]]++;
            }
            int count = 0;
            for(char c = 'a'; c<='z'; c++){
                if(maps[c]==N){
                    count++;
                }
            }
            return count;
        }
};
