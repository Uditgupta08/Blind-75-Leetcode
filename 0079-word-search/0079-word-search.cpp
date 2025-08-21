class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int len) {
        if (len == word.size()) {
            return true;
        }
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size())
            return false;
        if (word[len] != board[i][j]) {
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '#';
        bool left = false, right = false, up = false, down = false;
        left = dfs(board, word, i, j - 1, len + 1);
        up = dfs(board, word, i - 1, j, len + 1);
        down = dfs(board, word, i + 1, j, len + 1);
        right = dfs(board, word, i, j + 1, len + 1);
        
        bool ans = left || right || up || down;
        board[i][j] = temp;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};