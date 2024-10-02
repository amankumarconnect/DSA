//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        for(int i= 0; i<n; i++){
            for(int j = 0; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        
        for(int i = 1; i<n; i++){
            for(int j= n-i; j>0; j--){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
