class Solution {
public:
    int reverse(int num){
        int sum = 0;
        while(num){
         int rem = num%10;
         sum = sum * 10 +rem;
         num/=10;
        }
        return sum;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,long long> mp;
        long long ans = 0;
        int mod = 1e9 + 7;// 1000000007
        for(int num : nums){
            int diff = num - reverse(num);
            ans = (ans + mp[diff]) % mod;
            mp[diff]++; // freq increases after so it will count 1 after the pair
        }
        return ans;
    }
};