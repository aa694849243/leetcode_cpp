#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
//kadane
class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int ans = -100;
        int cur = 0;
        for (int num:nums) {
            cur = max(cur, 0) + num;
            ans = max(ans, cur);
        }
        return ans;
    }
};