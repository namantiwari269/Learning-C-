#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int scolor = image[sr][sc];
        if (scolor == color)
            return image;
        int n = image.size();
        int m = image[0].size();
        dfs(image, sr, sc, color, scolor);
        return image;
    }

private:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,
             int scolor) {
        int n = image.size();
        int m = image[0].size();
        image[sr][sc] = color;
        int dc[] = {0, 1, 0, -1};
        int dr[] = {1, 0, -1, 0};
        for (int i = 0; i < 4; i++) {
            int nrow = sr + dr[i];
            int ncol = sc + dc[i];
            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m &&
                image[nrow][ncol] == scolor) {
                dfs(image, nrow, ncol, color, scolor);
            }
        }
        return;
    }
};
