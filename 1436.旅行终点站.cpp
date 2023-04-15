/*
 * @lc app=leetcode.cn id=1436 lang=cpp
 *
 * [1436] 旅行终点站
 */
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
// @lc code=start
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::unordered_set<string> b;
        for(auto const& s:paths){
            b.insert(s[1]);
        }
        for(auto const& s:paths){
            if(b.find(s[0])!=b.end()){
                b.erase(s[0]);
            }
        }
        return *b.begin();
    }
};
// @lc code=end

