//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if((A>B&&A<C)||(A<B&&A>C)) return A;
        else if((B>A&&B<C)||(B<A&&B>C)) return B;
        else return C;
    }
};