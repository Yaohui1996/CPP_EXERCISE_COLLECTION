#include "LC_COMMON_HEADER.h"
//* 00100_相同的树.cpp
//* https://leetcode.cn/problems/same-tree/

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
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
    bool isSameTreeHelper(TreeNode* p, TreeNode* q)const{
        if(!p && !q){
            return true;
        }else if((p && !q) || (!p && q)){
            return false;
        }
        // p && q == true
        if (p->val != q->val){
            return false;
        }
        return isSameTreeHelper(p->left,q->left) && isSameTreeHelper(p->right,q->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSameTreeHelper(p,q);
    }
};