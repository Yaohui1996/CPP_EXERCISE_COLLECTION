#include "LC_COMMON_HEADER.h"
//* 257.二叉树的所有路径.cpp
//* https://leetcode.cn/problems/binary-tree-paths/

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
    std::string convert_path_to_str(const std::vector<int>& path)const{
        std::stringstream ss;
        for(size_t i = 0; i != path.size(); ++i){
            ss << std::to_string(path[i]);
            if(i != path.size() - 1){
                ss << "->";
            }
        }
        return ss.str();
    }
    void DFS(const TreeNode* const node, std::vector<int> path, std::vector<std::string>& result)const{
        path.push_back(node->val);
        if(!node->left && !node->right){
            result.push_back(convert_path_to_str(path));
        }
        if(node->left){
            DFS(node->left,path,result);
        }
        if(node->right){
            DFS(node->right,path,result);
        }
        
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        std::vector<std::string> result;
        DFS(root,{},result);
        return result;
    }
};