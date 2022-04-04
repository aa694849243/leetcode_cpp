#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            if (nums[l]+nums[r]==target) return vector<int>{nums[l], nums[r]};
            else if(nums[l] + nums[r] < target) ++l;
            else --r;
        }
        return  vector<int>();
    }
};