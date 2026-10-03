class Solution {
public:
    bool solve(vector<int>& nums, int mask, int sum, int k,
               int target, vector<int>& dp) {

        if(k == 1)
            return true;

        if(sum == target) {
            return solve(nums, mask, 0, k - 1,
                         target, dp);
        }

        if(dp[mask] != -1)
            return dp[mask];

        for(int i = 0; i < nums.size(); i++) {

            if(mask & (1 << i))
                continue;

            if(sum + nums[i] > target)
                continue;

            if(solve(nums, mask | (1 << i),
                     sum + nums[i], k, target, dp))
                return dp[mask] = 1;
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

        // DP based on which elements are used
        vector<int> dp(1 << n, -1);

        return solve(nums, 0, 0, k, target, dp);
    }
};