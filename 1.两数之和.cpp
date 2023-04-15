/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include<vector>
#include<unordered_map>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
          auto r = map.find(target-nums[i]);
          if(r!=map.end()&&r->second!=i){
            return {i,r->second};
          }
          map[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

