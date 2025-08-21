class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int sizeOfArray = coins.size();
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for (int coinInd = 1; coinInd <= sizeOfArray; coinInd++) {
            for (int currAmt = 1; currAmt <= amount; currAmt++) {
                int notTake = dp[currAmt];
                int take = INT_MAX;
                if (coins[coinInd - 1] <= currAmt &&
                    dp[currAmt - coins[coinInd - 1]] != INT_MAX) {
                    take = 1 + dp[currAmt - coins[coinInd - 1]];
                }

                dp[currAmt] = min(take, notTake);
            }
        }
        if (dp[amount] == INT_MAX) {
            return -1;
        }
        return dp[amount];
    }
};