/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */
#include<vector>
#include<math.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      int res = __INT_MAX__/2;
      int n = nums.size();
      for(int i=0;i<n-2;i++){
        for(int j = i+1;j<n-1;j++){
          for(int k= j+1;k<n;k++){
            int tmp = nums[i]+nums[j]+nums[k];
            if(abs(tmp-target)<abs(res-target)){
              res = tmp;
            }
          }
        }
      }
      return res;
    }
};
// @lc code=end

