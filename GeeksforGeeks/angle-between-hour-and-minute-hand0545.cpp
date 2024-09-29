class Solution {
  public:
    int getAngle(int H , int M) {
        // code here
        if(H==12) H = 0;
        float angle = abs(M/5.0 - (H + M/60.0))*30;
        if(angle<=180) return floor(angle);
        return floor(360-angle);
    }
};
