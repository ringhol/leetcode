/*
 * @lc app=leetcode.cn id=807 lang=cpp
 *
 * [807] 保持城市天际线
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  int maxIncreaseKeepingSkyline(vector<vector<int>> &grid) {
    // 先求出每一行最大值和每一列最大值
    int m = grid.size();
    vector<int> maxLine(m, 0);
    vector<int> maxRow(m, 0);
    for (int j = 0; j < m; j++) {
      int a = 0;
      auto &line = grid[j];
      for (int i = 0; i < m; i++) {
        maxRow[i] = max(line[i], maxRow[i]);
        a = max(a, line[i]);
      }
      maxLine[j] = a;
    }
    // 计算每一个元素可以增加的格子数量
    int res = 0;
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < m; i++) {
        int max = min(maxLine[j], maxRow[i]);
        if (max > grid[j][i]) {
          res += max - grid[j][i];
        }
      }
    }
    return res;
  }
};
// @lc code=end
