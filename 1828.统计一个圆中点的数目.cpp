/*
 * @lc app=leetcode.cn id=1828 lang=cpp
 *
 * [1828] 统计一个圆中点的数目
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;
        for(auto&circle:queries){
            int& x = circle[0];
            int& y = circle[1];
            int& r = circle[2];
            int count = 0;
            for(auto&point:points){
                if(r*r>=(point[0]-x)*(point[0]-x)+(point[1]-y)*(point[1]-y)){
                    count++;
                }
            }
            res.emplace_back(count);
        }
        return res;
    }
};
// @lc code=end

