#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <queue>

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
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if (!root) {
            return ans;
        }
        q.push(root);
        while (!q.empty()) {
            vector<int> temp;
            for (int i = q.size(); i >0; --i) {
                TreeNode *node = q.front();
                q.pop();
                temp.emplace_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans.emplace_back(temp);
        }
        return  ans;
    }
};
int main()
{
    int ans;
    Solution s;
    vector<int> prices{2, 3, 1, 0, 2, 5, 3};
    ans = s.levelOrder(prices);
    cout << ans;
}