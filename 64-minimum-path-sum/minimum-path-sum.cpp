class Solution {
public:
    int path(vector<vector<int>>& grid, int n, int m, vector<vector<int>>& dp) {
        if (n < 0 || m < 0)
            return INT_MAX;
        if (m == 0 && n == 0) {
            return grid[n][m];
        }
        if (dp[n][m] != -1) {
            return dp[n][m];
        }
        int up = path(grid, n - 1, m, dp);
        int left = path(grid, n, m - 1, dp);

        if (up != INT_MAX)
            up += grid[n][m];

        if (left != INT_MAX)
            left += grid[n][m];

        return dp[n][m] = min(up, left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return path(grid, n - 1, m - 1, dp);
    }
};