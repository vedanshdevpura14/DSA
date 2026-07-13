class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) 
        return false;

        int sum = 1; // 1 is always a divisor
        // for (int i = 2; i * i <= num; i++) {
        //     if (num % i == 0) {
        //         sum += i;
        //         if (i != num / i)  // add both divisors
        //             sum += num / i;
        //     }
        // }
        for(int i = 2 ; i<=num/2 ; i++){
            if(num%i ==0){
                sum+=i;
            }
        }
        return sum == num;
    }
};
