/*
 * @lc app=leetcode.cn id=1019 lang=cpp
 *
 * [1019] 链表中的下一个更大节点
 */
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
  vector<int> nextLargerNodes(ListNode *head) {
    vector<int> ans;
    stack<pair<int, int>> s;
    int index = -1;
    for (ListNode *p = head; p; p = p->next) {
      index++;
      ans.push_back(0);
      if (s.empty()) {
        s.push({index, p->val});
      } else if (s.top().second >= p->val) {
        s.push({index, p->val});
      }
      if (p->val > s.top().second) {
        while (!s.empty() && p->val > s.top().second) {
          ans[s.top().first] = p->val;
          s.pop(); 
        }
        s.push({index, p->val});
      }
    }
    return ans;
  }
};
// @lc code=end
