

class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        long long fines = 0;
        
        for(int i = 0; i<car.size(); i++){
            if(!(car[i]&1)&&(date&1)){
                fines+=fine[i];
            }
            else if((car[i]&1)&&!(date&1)){
                fines+=fine[i];
            }
        }
        return fines;
    }
};
