#include<iostream>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (grid[row][col] == '1' && vis[row][col] == 0) {
                    cnt++;
                    bfs(grid, vis, row, col);
                }
            }
        }
        return cnt;
    }

private:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int row,
             int col) {
        queue<pair<int, int>> q;
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        q.push({row, col});
        while (!q.empty()) {
            row = q.front().first;
            col = q.front().second;
            q.pop();

            int drow[] = {-1, 0, 1, 0};
            int dcol[] = {0, 1, 0, -1};

            for (int k = 0; k < 4; k++) {
                int nrow = row + drow[k];
                int ncol = col + dcol[k];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0) {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return;
    }
};