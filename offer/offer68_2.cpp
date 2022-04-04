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
    unordered_map<int, TreeNode *> m;

    unordered_map<int, bool> visted;

    void dfs(TreeNode *node){
        if (node) {
            if(node->left) {
                m[node->left->val] = node;
                dfs(node->left);
            }
            if (node->right) {
                m[node->right->val] = node;
                dfs(node->right);
            }
        }
    }

    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        m[root->val] = nullptr;
        dfs(root);
        while (p) {
            visted[p->val] = true;
            p = m[p -> val];
        }
        while (q) {
            if(visted[q->val]) return q;
            q = m[q->val];
        }
        return nullptr;

    }
};