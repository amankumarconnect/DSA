class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i<details.size(); i++){
            string s;
            s+= details[i][11];
            s+= details[i][12];
            if(stoi(s)>60) count++;
        }
        return count;
    }
};
