class Solution{
public:
    int andGate(vector<int> arr,int N){
        //code here
        for(int i = 0; i<N; i++){
            if(arr[i]==0) return 0;
        }
        return 1;
    }
};
