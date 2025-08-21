class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        int m = wordDict.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < m; j++) {
                string currWord = wordDict[j];
                int len = currWord.size();
                if (len <= i && s.substr(i - len, len) == currWord &&
                    dp[i - len]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};