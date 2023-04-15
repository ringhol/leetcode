/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */
#include <iostream>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  string longestPalindrome(string s) {
    int n = s.size();
    if (n < 2) {
      return s;
    }
    int begin = 0;
    int maxLen = 1;
    for (int i = 0; i < n; i++) {
      // 从中心向外扩展
      int l = i;
      int r = i;
      while (l - 1 >= 0 && s[l - 1] == s[l])
        l--;
      while (r + 1 < n && s[r] == s[r + 1])
        r++;
      int b = l;
      int len = r - l + 1;
      for (int j = i; j < n && l != 0 && r != n - 1 && s[l - 1] == s[r + 1];
           j++, l--, r++) {
        // 继续扩展
        b--;
        len += 2;
      }
      if (len > maxLen) {
        begin = b;
        maxLen = len;
      }
    }
    return s.substr(begin, maxLen);
  }
};
// @lc code=end
