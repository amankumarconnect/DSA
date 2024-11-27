class Solution{
public:
    int xorGate(vector<int> arr,int N){
        //code here
        int count = 0;
        for(int i = 0; i<N; i++){
            if(arr[i] == 1) count++;
        }
        return count%2;
    }
};
