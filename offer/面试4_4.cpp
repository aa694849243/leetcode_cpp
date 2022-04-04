#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <pair>
#include <cmath>
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
    int height(TreeNode *node){
        if(!node) return 0;
        int l = height(node->left);
        int r = height(node->right);
        if(l==-1||r==-1||std::abs(l-r)>1) return -1;
        else {
            return std::max(l, r) + 1;
        }
    }
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};