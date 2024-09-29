class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12) hour = 0;
        float angle = abs(minutes/5.0 - (hour + minutes/60.0))*30;
        if(angle<=180) return angle;
        return 360-angle;
    }
};
