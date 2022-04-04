#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
//#include <pair>

using namespace std;

//二维数组
class Solution {
public:
    int dir[4][2] = {{0,  1},
                     {0,  -1},
                     {1,  0},
                     {-1, 0}};
    int flag, R, C;

    void dfs(vector<vector<int>> &image, int r, int c, int newcolor, vector<vector<bool>> &vis) {
        vis[r][c] = true;
        image[r][c] = newcolor;
        for (int i = 0; i < 4; ++i) {
            int nr = r+dir[i][0], nc = c+dir[i][1];
            if (nr >= 0 && nr < R && nc >= 0 && nc < C && image[nr][nc] == flag && vis[nr][nc] == false) {
                dfs(image, nr, nc, newcolor, vis);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
        flag = image[sr][sc];
        R = image.size();
        C = image[0].size();
        vector<vector<bool>> vis(R, vector<bool>(C, false));
        dfs(image, sr, sc, newColor, vis);
        return image;
    }
};
int main()
{
    vector<vector<int>> ans;
    Solution s;
    vector<vector<int>> a={{1, 1, 1},
                        {1, 1, 0},
                        {1, 0, 1}};
    int newColor = 2, sr = 1, sc = 1;
    ans = s.floodFill(a,sr,sc,newColor);
};