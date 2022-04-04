#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto result= equal_range(nums.begin(), nums.end(), target);
        return result.second-result.first;
    }
};


int main()
{
    int ans;
    Solution s;
    vector<int> prices{5,7,7,8,8,10};
    int a=8;
    ans = s.search(prices,a);
    cout << ans;
}