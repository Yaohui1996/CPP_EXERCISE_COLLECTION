#include "LC_COMMON_HEADER.h"
//* 00094_二叉树的中序遍历.cpp
//* https://leetcode.cn/problems/binary-tree-inorder-traversal/

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr)
    {
    }
    TreeNode(int x) : val(x), left(nullptr), right(nullptr)
    {
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right)
    {
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
  private:
    void zhongxu(TreeNode *node, std::vector<int> &ret) const
    {
        if (!node)
        {
            return;
        }
        if (node->left)
        {
            zhongxu(node->left, ret);
        }
        ret.push_back(node->val);
        if (node->right)
        {
            zhongxu(node->right, ret);
        }
    }

  public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        std::vector<int> ret;
        zhongxu(root, ret);
        return ret;
    }
};