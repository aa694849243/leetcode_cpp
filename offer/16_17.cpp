#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <pair>

using namespace std;

//线段树 最大连续和
class Solution {
public:
    struct status {
        int lsum, rsum, isum, msum;
    };

    status pushup(status l, status r) {
        int isum = l.isum + r.isum;
        int lsum = max(l.lsum, l.isum + r.lsum);
        int rsum = max(r.rsum, r.isum + l.rsum);
        int msum = max(max(l.msum, r.msum), l.rsum + r.lsum);
        return (status) {lsum, rsum, isum, msum};
    };

    status get(vector<int> &nums, int l, int r) {
        if (l == r) return (status) {nums[l], nums[l], nums[l], nums[l]};
        int mid = (l + r) >> 1;
        status L = get(nums, l, mid);
        status R = get(nums, mid + 1, r);
        return pushup(L, R);
    }


    int maxSubArray(vector<int> &nums) {
        return get(nums, 0, nums.size() - 1).msum;
    }

};