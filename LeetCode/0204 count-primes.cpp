class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> vecs(n,true);
        int count = n-2;
        for(int i = 2; (i*i)<n; i++){
            if(vecs[i]){
                for (int j = i * i; j < n; j += i) {
                    if (vecs[j]) {
                        vecs[j] = false;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};
