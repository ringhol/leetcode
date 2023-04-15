/*
 * @lc app=leetcode.cn id=237 lang=cpp
 *
 * [237] 删除链表中的节点
 */

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
    void deleteNode(ListNode* node) {
        ListNode*p = node;
        while(p->next->next){
            p->val = p->next->val;
            p = p->next;
        }
        p->val = p->next->val;
        p->next = nullptr;
    }
};
// @lc code=end

