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
    int bisect(vector<int> &nums, int l, int r){
        if (l > r) {
            return -1;
        }
        int mid = l + (r - l) / 2;
        int left = bisect(nums, l, mid - 1);
        if(left!=-1) return left;
        if(nums[mid]==mid) return mid;
        return bisect(nums, mid + 1, r);
    }
    int findMagicIndex(vector<int>& nums) {
        return bisect(nums, 0, (int) nums.size() - 1);
    }
};