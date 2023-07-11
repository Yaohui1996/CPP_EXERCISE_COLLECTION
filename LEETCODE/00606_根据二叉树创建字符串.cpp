#include "LC_COMMON_HEADER.h"
//* 00606_根据二叉树创建字符串.cpp
//* https://leetcode.cn/problems/construct-string-from-binary-tree/

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void bianli(TreeNode* node, std::stringstream& ss){
        // std::cout << node->val << std::endl;
        ss << node->val;
        // if(!node->left && !node->right){
        //     return;
        // }
        // ss << "(";
        if(node->left){
            bianli(node->left, ss);
        }
        // ss << ")";
        // ss << "(";
        if(node->right){
            bianli(node->right, ss);
        }
        // ss << ")";

    }
public:
    string tree2str(TreeNode* root) {
        std::stringstream ss;
        bianli(root,ss);
        return ss.str();
    }
};