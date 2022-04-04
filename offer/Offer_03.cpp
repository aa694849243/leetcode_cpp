#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int> &nums) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i]==i) {
                i++;
                continue;
            }
            if (nums[i]==nums[nums[i]]) return nums[i];
            swap(nums[i],nums[nums[i]]);
        }
        return -1;
    }
};
int main()
{
    int ans;
    Solution s;
    vector<int> prices{2, 3, 1, 0, 2, 5, 3};
    ans = s.findRepeatNumber(prices);
    cout << ans;
}