class Solution {
    int m, n;
    int memo[100][100][105];

    bool solve(int r, int c, int balance, vector<vector<char>>& grid) {
        balance += (grid[r][c] == '(' ? 1 : -1);

        // Prune if balance is negative or exceeds total remaining steps needed
        if (balance < 0 || balance > (m + n - 1) / 2) return false;

        // Destination reached
        if (r == m - 1 && c == n - 1) {
            return balance == 0;
        }

        if (memo[r][c][balance] != -1) {
            return memo[r][c][balance];
        }

        bool canReach = false;
        // Move Down
        if (r + 1 < m) {
            canReach = canReach || solve(r + 1, c, balance, grid);
        }
        // Move Right
        if (c + 1 < n) {
            canReach = canReach || solve(r, c + 1, balance, grid);
        }

        return memo[r][c][balance] = canReach;
    }

public:
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        // Length must be even, and start/end must be valid brackets
        if ((m + n - 1) % 2 != 0 || grid[0][0] == ')' || grid[m - 1][n - 1] == '(') {
            return false;
        }

        memset(memo, -1, sizeof(memo));
        return solve(0, 0, 0, grid);
    }
};