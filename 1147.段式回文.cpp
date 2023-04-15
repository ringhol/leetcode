/*
 * @lc app=leetcode.cn id=1147 lang=cpp
 *
 * [1147] 段式回文
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
 public:
  int longestDecomposition(string text) {
    int windowW = 1;
    int res = 0;
    int n = text.size();
    if(n == 1)return 1;
    if(n == 2){
      if(text[0]==text[1]){
        return 2;
      }else return 1;
    }
    int i = 0;
    while (i <= n - i - 1) {
      if (i == n - i - 1) {
        res++;
        break;
      }
      while (i + windowW <= n >> 1 &&
             text.substr(i, windowW) != text.substr(n - i - windowW, windowW)) {
        windowW++;
      }
      if (i + windowW > n >> 1 &&
          text.substr(i, windowW) != text.substr(n - i - windowW, windowW)) {
        res++;
        break;
      } else {
        res += 2;
        i += windowW;
        windowW = 1;
      }
    }
    return res;
  }
};
// @lc code=end
