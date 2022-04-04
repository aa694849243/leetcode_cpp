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
private:
    vector<int> res;
    void inorder(TreeNode *node){
        if (node != nullptr) {
            inorder(node->right);
            res.emplace_back(node->val);
            inorder(node->left);
        }
    }
public:
    int kthLargest(TreeNode* root, int k) {
        inorder(root);
        return res[k - 1];
    }
};