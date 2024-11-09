//User function template for C++

class Solution{
    public:
    double findArea(int A,int B,int C){
        //code here
        if((A+B)<C||(B+C)<A||(A+C)<B) return 0;
        double S = ((double)(A+B+C)/2);
        double area = (double) sqrt(abs(S*(S-A)*(S-B)*(S-C)));
        return area;
    }
};
