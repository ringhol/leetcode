/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<int>res;
        stack<TreeNode*> stk;
        stack<int> collect;
        stk.push(root);
        while(!stk.empty()){
            //取出一个节点
            auto cur = stk.top();stk.pop();
            collect.push(cur->val);
            //先压入左节点，再压入又节点
            if(cur->left){
                stk.push(cur->left);
            }
            if(cur->right){
                stk.push(cur->right);
            }
        }
        while(!collect.empty()){
            res.push_back(collect.top());
            collect.pop();
        }
        return res;
    }
};
// @lc code=end

