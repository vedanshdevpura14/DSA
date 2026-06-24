class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   // avoid overflow

        if (N < 0) {
            x = 1 / x;
            N = -1*1LL*N; // removes negative as - - = +
        }

        double ans = 1;

        while (N > 0) {
            if (N % 2 == 1)      // if odd
                ans *= x; //

            x *= x;             // square
            N /= 2;
        }
        // for(long long i = 0 ; i< N ; i++){
        //     ans*=x;
        // }

        return ans;
    }
};
