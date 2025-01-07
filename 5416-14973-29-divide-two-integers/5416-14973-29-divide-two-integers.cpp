class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Handle the case where the divisor is 1 or -1
        if (divisor == 1) {
            return dividend;
        }
        if (divisor == -1) {
            return -dividend;
        }

        int sign=1;
        if(dividend>=0 && divisor<0){
            sign=-1;
        }
        if(dividend<=0 && divisor>0){
            sign=-1;
        }
        long n= abs((long)dividend); //numerator
        long d= abs((long)divisor); //denominator
        
        long ans=0;

        while(n>=d){
            int count=0;
            while (n >= (d << (count + 1)) && (count + 1) < 32) {
                count++;
            }
            //store the ans 
            ans+=(1<<count);
            n-=(d*(1<<count));
        }
        if(ans==(1<<31) && sign) return INT_MAX;
        if(ans==(1<<31) && !sign) return INT_MIN;
        return sign*ans;
    }
};