#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        vector<int> ans;
        if (!matrix.size() or !matrix[0].size()) {
            return {};
        }
        int l = 0, r = matrix[0].size() - 1, t = 0, d = matrix.size() - 1;
        while (l <= r && t <= d) {
            for (int i = l; i <= r; ++i) {
                ans.emplace_back(matrix[t][i]);
            }
            for (int i = t + 1; i <= d; ++i) {
                ans.emplace_back(matrix[i][r]);
            }
            if (l < r && t < d) {
                for (int i = r - 1; i > l; --i) {
                    ans.emplace_back(matrix[d][i]);
                }
                for (int i = d; i > t; --i) {
                    ans.emplace_back(matrix[i][l]);
                }
            }
            l++;
            r--;
            t++;
            d--;
        }
        return ans;
    }
};
