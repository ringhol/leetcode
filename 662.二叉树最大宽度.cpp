/*
 * @lc app=leetcode.cn id=662 lang=cpp
 *
 * [662] 二叉树最大宽度
 */
#include <queue>
#include <unordered_map>
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
  int widthOfBinaryTree(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);
    unordered_map<TreeNode *, int> map;
    map[root] = 1;
    int curLevel = 1;
    int curNodes = 0;
    int maxNodes = -1;
    while (!q.empty()) {
      auto curNode = q.front();
      q.pop();
      if (map[curNode] == curLevel) {
        curNodes++;
      } else {
        // 结算
        maxNodes = maxNodes > curNodes ? maxNodes : curNodes;
        curLevel++;
        curNodes = 1;
      }
      if (curNode->left) {
        q.push(curNode->left);
        map[curNode->left] = curLevel + 1;
      }
      if (curNode->right) {
        q.push(curNode->right);
        map[curNode->right] = curLevel + 1;
      }
    }
    //最后一层结算
    maxNodes = maxNodes > curNodes ? maxNodes : curNodes;
    return maxNodes;
  }
};
// @lc code=end
