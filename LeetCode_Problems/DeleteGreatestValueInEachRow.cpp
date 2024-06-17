// problem link
// https://leetcode.com/problems/delete-greatest-value-in-each-row/description/


class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (vector<int>& row : grid) {
            sort(row.begin(), row.end());
        }

        int n = grid.size();
        int m = grid[0].size();  // n1 is changed to m for better readability

        int sum = 0;

        for (int col = m - 1; col >= 0; col--) {  // iterate over each column from the last to the first
            int max_val = INT_MIN;
            for (int row = 0; row < n; row++) {
                max_val = max(max_val, grid[row][col]);
            }
            sum += max_val;
        }

        return sum;
    }
};
