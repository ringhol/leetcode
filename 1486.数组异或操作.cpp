/*
 * @lc app=leetcode.cn id=1486 lang=cpp
 *
 * [1486] 数组异或操作
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        for(int i = 0;i<n;i++){
            res ^= start + (i<<1);
        }
        return res;
    }
};
// @lc code=end

