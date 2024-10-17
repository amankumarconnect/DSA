// User function Template for C++

class Solution{
public:
    int totalJumps(int X, int Y, int N, int arr[]){
        // code here
        int ans = 0;
        for(int i = 0; i<N; i++){
            ans++;
            if((arr[i]-X)>0){
                float div = (float)((arr[i]-X)/(float)(X-Y));
                ans += ceil(div);
            }
        }
        return ans;
    }
};
