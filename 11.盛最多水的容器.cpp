/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */
#include<vector>
#include<math.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxVal = 0;
      int n = height.size();
      int i=0,j= n-1;
      while(i<j){
        maxVal = max(maxVal,min(height[i],height[j])*(j-i));
        if(height[i]>height[j]){
          j--;
        }else{
          i++;
        }
      }
      return maxVal;
    }
};
// @lc code=end

