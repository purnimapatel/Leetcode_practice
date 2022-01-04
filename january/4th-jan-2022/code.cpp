class Solution {
public:
    int bitwiseComplement(int n) {
        int a = 0;
        while(a<=n){
            a = a*2+1;
            if(n<=a){
                break;
            }
        }
        return(a-n);
    }
};
// think more optimized solution as its performance ranking on the leetcode is very low.