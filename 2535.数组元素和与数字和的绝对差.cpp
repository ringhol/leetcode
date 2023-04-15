/*
 * @lc app=leetcode.cn id=2535 lang=cpp
 *
 * [2535] 数组元素和与数字和的绝对差
 */
#include<vector>
#include<math.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for(int&i:nums){
            a+=i;
            while(i>0){
                b+=i%10;
                i/=10;
            }
        }
        return abs(a-b);
    }
};
// @lc code=end

