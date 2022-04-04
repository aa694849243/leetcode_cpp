#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
//右中位数
class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int l = 0, r = nums.size();
        while (l < r) {
            int mid = (l + r) / 2;
            if (mid < nums[mid]) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};