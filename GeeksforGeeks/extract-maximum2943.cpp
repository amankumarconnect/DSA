
class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        //code here.
        int max = -1;
        for(int i = 0; i<S.size();i++){
            if(!isalpha(S[i])){
                string str;
                for(int j = i; j<S.size();j++){
                    if(isalpha(S[j])) break;
                    str+=S[j];
                }
                if(stoi(str)>max) max = stoi(str);
            }
        }
        return max;
    } 
};
