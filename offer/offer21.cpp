#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> exchange(vector<int> &nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            if ((nums[l] & 1) != 0) {
                l++;
                continue;
            }
            if ((nums[r] & 1) != 1) {
                r--;
                continue;

            }
            swap(nums[l++],nums[r--]);
        }
        return nums;
    }
};
int main()
{
    vector<int> ans;
    Solution s;
    vector<int> prices{5,7,7,8,8,10};
    ans = s.exchange(prices);
    cout << ans[0];
}