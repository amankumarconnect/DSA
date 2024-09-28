
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        double circle, rec;
        switch(choice){
            case 1:
                circle = M_PI*pow(arr[0],2);
                return circle;
            case 2:
                rec = arr[0]*arr[1];
                return rec;
        }
    }
};
