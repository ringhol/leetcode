/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *res = new ListNode;
    auto pres = &res;
    int flag = 0;
    auto p1 = &l1, p2 = &l2;
    for (; *p1 != nullptr && *p2 != nullptr;
         p1 = &(*p1)->next, p2 = &(*p2)->next) {
      int a = (*p1)->val + (*p2)->val + flag;
      if (a >= 10) {
        a = a - 10;
        flag = 1;
      } else {
        flag = 0;
      }
      (*pres)->val = a;
      (*pres)->next = new ListNode;
      pres = &(*pres)->next;
    }
    while (*p1 != nullptr) {
      int a = (*p1)->val + flag;
      if (a >= 10) {
        flag = 1;
        a -= 10;
      } else {
        flag = 0;
      }
      (*pres)->val = a;
      (*pres)->next = new ListNode;
      pres = &(*pres)->next;
      p1 = &(*p1)->next;
    }
    while (*p2 != nullptr) {
      int a = (*p2)->val + flag;
      if (a >= 10) {
        flag = 1;
        a -= 10;
      } else {
        flag = 0;
      }
      (*pres)->val = a;
      (*pres)->next = new ListNode;
      pres = &(*pres)->next;
      p2 = &(*p2)->next;
    }
    if (flag == 1) {
      (*pres)->val = 1;
    } else {
      delete (*pres);
      (*pres) = nullptr;
    }
    return res;
  }
};
// @lc code=end
