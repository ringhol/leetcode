/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */
#include <unordered_map>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> map;
    for (int &a : nums) {
      map[a]++;
      if (map[a] != 1) {
        return true;
      }
    }
    return false;
  }
};
// @lc code=end
