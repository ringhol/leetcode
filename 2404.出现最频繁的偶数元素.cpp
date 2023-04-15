/*
 * @lc app=leetcode.cn id=2404 lang=cpp
 *
 * [2404] 出现最频繁的偶数元素
 */
#include <unordered_map>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
 public:
  int mostFrequentEven(vector<int>& nums) {
    unordered_map<int, int> map;
    for (int v : nums) {
      if (v % 2 == 0) {
        map[v]++;
      }
    }
    if (map.size() == 0) {
      return -1;
    }
    pair<int, int> res{__INT_MAX__, 0};
    for (auto& v : map) {
      if (v.second > res.second ||
          (v.second == res.second && v.first < res.first)) {
        res = v;
      }
    }
    return res.first;
  }
};
// @lc code=end
