#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

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
    bool dfs(TreeNode *p, TreeNode *q){
        if (!p||!q) return !p && !q;
        if (p->val!=q->val) return false;
        return dfs(p->left, q->right) and dfs(p->right, q->left);
    }

    bool isSymmetric(TreeNode *root) {
        if (!root) {
            return true;
        }
        return dfs(root->left, root->right);
    }
};