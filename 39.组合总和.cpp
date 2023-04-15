/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> res;
      std::sort(candidates.begin(),candidates.end());

    }
    void combinationSumfunc(vector<int>& candidates,int target,vector<vector<int>>& res){
      for(int i:candidates){
        int tmp = target - i;
        if(tmp == 0){
          
        }
        combinationSumfunc(candidates,tmp,res);
      }
    }
};
// @lc code=end

