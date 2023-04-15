/*
 * @lc app=leetcode.cn id=2399 lang=cpp
 *
 * [2399] 检查相同字母间的距离
 */
#include<string>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.size();
        for(int i = 0;i<n-1;++i){
            int j = i+1;
            while(j!=n&&s[i]!=s[j]){
                ++j;
            }
            if(j!=n&&distance[s[i]-'a']!=j-i-1)
                return false;
        }
        return true;
    }
};
// @lc code=end

