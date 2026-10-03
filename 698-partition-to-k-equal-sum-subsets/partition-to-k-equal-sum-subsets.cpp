class Solution {
public:
    bool solve(vector<int>& nums, int mask, int sum, int k,
               int target, vector<int>& dp) {

        if(k == 1)
            return true;

        if(sum == target)
            return solve(nums, mask, 0, k - 1, target, dp);

        if(dp[mask] != -1)
            return dp[mask];

        for(int i = 0; i < nums.size(); i++) {

            int bit = 1;
            for(int j = 0; j < i; j++)
                bit *= 2;

            // element already used
            if(mask % (2 * bit) >= bit)
                continue;

            if(nums[i] <= target - sum) {

                if(solve(nums, mask + bit,
                         sum + nums[i], k, target, dp))
                    return dp[mask] = 1;
            }
        }

        return dp[mask] = 0;
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {

        int n = nums.size();

        int total = 0;

        for(int x : nums)
            total += x;

        if(total % k != 0)
            return false;

        int target = total / k;

        vector<int> dp(1000000, -1);

        return solve(nums, 0, 0, k, target, dp);
    }
};