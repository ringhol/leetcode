/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */
#include <unordered_set>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode *detectCycle(ListNode *head) {
    unordered_set<ListNode *> set;
    for (ListNode *p = head; p; p = p->next) {
      if (set.find(p) != set.end()) {
        return p;
      }
      set.insert(p);
    }
    return nullptr;
  }
};
// @lc code=end
