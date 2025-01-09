class Solution {
public:

    double solve(double x, long n ){
        // when n==0
        if(n==0){
            return 1;
        }

        if(n<0){
            n=n*-1;
            x=1/x;
        }

        //solving part
        if(n%2==0){
            return solve(x*x,n/2);
        }

       
            return x*solve(x*x,(n-1)/2);
       
    }

    double myPow(double x, int n) {
       return solve(x,long(n));
    }
};