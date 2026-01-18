class Solution {
  public:
  int solve(int i, int sum, vector<int>& coins, vector<vector<int>>& dp) {
    if (sum == 0) return 1;
    if (i == 0) return 0;

    if (dp[i][sum] != -1) return dp[i][sum];

    if (coins[i - 1] <= sum)
        return dp[i][sum] =
            solve(i, sum - coins[i - 1], coins, dp) +
            solve(i - 1, sum, coins, dp);
    else
        return dp[i][sum] =
            solve(i - 1, sum, coins, dp);
}
   
int count(vector<int>& coins, int sum) {
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    return solve(n, sum, coins, dp);
}
};