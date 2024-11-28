
class Solution {
  public:
    int mulClock(int num1, int num2) {
        
        // code here
        int mul = num1*num2;
        return mul%12;
    }
};
