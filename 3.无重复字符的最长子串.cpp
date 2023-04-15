/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
#include <string>
using namespace std;
#include <math.h>
#include <unordered_map>
// @lc code=start
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int maxLen = 0;
    int begin = 0;
    int curLen = 0;
    // 散列表记录字符出现的位置
    unordered_map<char, int> hashtable;
    for (int i = 0; i < s.length(); i++) {
      auto r = hashtable.find(s[i]);
      if(r==hashtable.end()){
        curLen++;
        hashtable[s[i]] = i;
      }else{
        //有重复，移动窗口
        if(curLen>maxLen){
          maxLen = curLen;
        }
        begin = max(hashtable[s[i]],begin);
        curLen = i-begin;
        hashtable[s[i]] = i;
      }
      if(curLen>maxLen){
        maxLen = curLen;
      }
    }
    return maxLen;
  }
};
// @lc code=end
