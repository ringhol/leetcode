/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      unordered_set<vector<int>> set(0);
      getSubset(nums,set);
      vector<vector<int>> res(set.begin(),set.end());
      res.push_back({});
      return res;
    }
    void getSubset(vector<int> nums,unordered_set<vector<int>>& res){
      if(res.find(nums)!=res.end()) return;
      res.insert(nums);
      if(nums.size()==1){
          return;
      }
      for(int i = 0;i<nums.size();i++){
        int tmp = nums[i];
        nums.erase(nums.begin()+i);
        getSubset(nums,res);
        nums.insert(nums.begin()+i,tmp);

      }
    }
};
// @lc code=end

