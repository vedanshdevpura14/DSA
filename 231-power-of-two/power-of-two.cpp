class Solution {
public:
    bool isPowerOfTwo(int n) {
        //recursion
    //     //base case
    //     if(n == 1)
    //     return 1;

    //     //ek joh apan solve kareege
    //      if(n%2!=0)
    //      return false;
       
    //    //ek joh recursiion solve karega
    //    return isPowerOfTwo(n/2);
    //   if(n<1)
    //   return 0;

    // while(n!=1){
    //     if(n%2!=0)
    //     return 0;

    //      n=n/2;
        
    // }
    // return 1;

    return n > 0 && (n & (n - 1)) == 0;
    }
};