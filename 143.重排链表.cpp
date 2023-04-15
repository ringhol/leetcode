/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
 */
#include <unordered_set>
#include <vector>
using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
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
  void reorderList(ListNode* head) {
    vector<ListNode*> v;
    for(auto p = head;p;p = p->next){
        v.push_back(p);
    }
    int n = v.size();
    int offset = 0;
    if(n%2==0){
        offset = n/2 - 1;
    }else{
        offset=n/2;
    }
    for(int i=0;i<offset;i++){
        v[n-i-2]->next = nullptr;
        v[i]->next = v[n-i-1];
        v[n-i-1]->next = v[i+1];
    }
  }
};
// @lc code=end
