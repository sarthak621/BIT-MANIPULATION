class Solution {
public:
    
    int noOfSetBitsInAns(int n){
        int count=0;
        while(n>1){
            count+=n&1;
            n=n>>1;
        }
        if(n==1) count+=1;

        return count;
    }

    int minBitFlips(int start, int goal) {
        int ans= start^goal;

        return noOfSetBitsInAns(ans);
    }
};