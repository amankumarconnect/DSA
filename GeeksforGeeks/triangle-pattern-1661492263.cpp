class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 0; i<n; i++){
            for(int j = 1; j<n-i;j++){
                cout<<" ";
            }
            for(int k = 0; k<=2*i; k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
