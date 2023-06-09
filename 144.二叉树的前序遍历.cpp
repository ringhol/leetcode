/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */
#include <vector>
#include <stack>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
// @lc code=start
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
class Solution {
 public:
  vector<int> preorderTraversal(TreeNode *root) {
    if(!root){
      return {};
    }
    vector<int> res;
    stack<TreeNode*> stack;
    stack.push(root);
    while(!stack.empty()){
      //先弹出一个节点
      auto cur = stack.top();
      stack.pop();
      res.push_back(cur->val);
      //压入右节点
      if(cur->right){
        stack.push(cur->right);
      }
      //压入左节点
      if(cur->left){
        stack.push(cur->left);
      }
    }
    return res;
  }
};
// @lc code=end
