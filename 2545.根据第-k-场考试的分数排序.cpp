/*
 * @lc app=leetcode.cn id=2545 lang=cpp
 *
 * [2545] 根据第 K 场考试的分数排序
 */
#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<int>> sortTheStudents(vector<vector<int>> &score, int k) {
    sort(score.begin(), score.end(), [k](vector<int>&a,vector<int>&b){
      return a[k]>b[k];
    });
    return score;
  }
};
// @lc code=end
