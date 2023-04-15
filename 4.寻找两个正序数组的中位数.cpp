/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> nums;
      int n1 = nums1.size();
      int n2 = nums2.size();
      int n = n1+n2;
      int i=0,j=0;
      while(i<n1&&j<n2){
        while(i<n1&&nums1[i]<=nums2[j]){
          nums.push_back(nums1[i++]);
        }
        while(i<n1&&j<n2&&nums1[i]>=nums2[j]){
          nums.push_back(nums2[j++]);
        }
      }
      while(i<n1){
        nums.push_back(nums1[i++]);
      }
      while(j<n2){
        nums.push_back(nums2[j++]);
      }
      if(n%2==0){
        return (nums[n/2-1]+nums[n/2])/2.0;
      }
      return nums[(n1+n2)/2]*1.0;
    }
};
// @lc code=end

