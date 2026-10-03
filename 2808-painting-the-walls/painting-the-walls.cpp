class Solution {
public:
    int solve(int i, int walls, vector<int>& cost,
              vector<int>& time, vector<int>& dp) {

        if(walls <= 0)
            return 0;

        if(i == cost.size())
            return 1e9;//INT_MAX

        int index = i * (cost.size() + 1) + walls;

        if(dp[index] != -1)
            return dp[index];

        int notTake = solve(i + 1, walls,cost, time, dp);

        int take = cost[i] +solve(i + 1, walls - time[i] - 1 ,cost, time, dp);

        return dp[index] = min(take, notTake);
    }

    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        vector<int> dp(n * (n + 1), -1);
        return solve(0, n, cost, time, dp);
    }
};