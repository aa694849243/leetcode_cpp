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
    bool hassubstructur(TreeNode *A, TreeNode *B) {
        if (!B) return true;
        if (!A || A->val != B->val) {
            return false;
        }
        return hassubstructur(A->left, B->left) && hassubstructur(A->right, B->right);
    }

    bool isSubStructure(TreeNode *A, TreeNode *B) {
        if (!A or !B) {
            return false;
        }
        return hassubstructur(A, B) or isSubStructure(A->left, B) or isSubStructure(A->right, B);
    }
};