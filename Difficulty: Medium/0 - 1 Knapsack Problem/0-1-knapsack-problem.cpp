class Solution {
  public:
  int solve(int i, int W, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp) {
    if (i == 0 || W == 0) return 0;

    if (dp[i][W] != -1) return dp[i][W];

    if (wt[i - 1] <= W)
        return dp[i][W] = max(
            val[i - 1] + solve(i - 1, W - wt[i - 1], wt, val, dp),
            solve(i - 1, W, wt, val, dp)
        );
    else
        return dp[i][W] = solve(i - 1, W, wt, val, dp);
}
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    return solve(n, W, wt, val, dp);

    }
    
};