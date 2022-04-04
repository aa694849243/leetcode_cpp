#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <pair>

using namespace std;

class Solution {
public:
    int massage(vector<int> &nums) {
        int n = (int) nums.size();
        if (!n) {
            return 0;
        }
        int dp0 = 0, dp1 = nums[0];
        for (int i = 1; i < n; ++i) {
            int tmp = max(dp0 + nums[i], dp1);
            dp0 = dp1;
            dp1 = tmp;
        }
        return dp1;
    }
};