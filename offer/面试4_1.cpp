#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <pair>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *dfs(vector<int> &nums, int l, int r) {
        if (l > r) {
            return nullptr;
        }
        int mid = (l + r) >> 1;
        TreeNode *p = new TreeNode(nums[mid]);
        p->left = dfs(nums, l, mid - 1);
        p->right = dfs(nums, mid + 1, r);
        return p;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return dfs(nums, 0, nums.size());

    }
};