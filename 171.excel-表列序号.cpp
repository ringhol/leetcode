/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel 表列序号
 */
#include<string>
#include<math.h>
// @lc code=start
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int res = 0;
        for(int i = n-1;i>=0;i--){
            res+=(columnTitle[i]+1-'A')*pow(26,n-i-1);
        }
        return res;
    }
};
// @lc code=end

