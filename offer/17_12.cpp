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
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}

class Solution {
private:
    TreeNode *ans = new TreeNode(1), *cur = ans;

    void dfs(TreeNode *node) {
        if(!node) {
            return;
        }
        dfs(node->left);
        node->left = nullptr;
        cur->right = node;
        cur = node;
        dfs(node->right);
    }

public:
    TreeNode *convertBiNode(TreeNode *root) {
        dfs(root);
        return ans->right;
    }
};