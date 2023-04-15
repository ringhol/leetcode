/*
 * @lc app=leetcode.cn id=1023 lang=cpp
 *
 * [1023] 驼峰式匹配
 */
#include <vector>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    bool match(string query,string pattern){
      size_t j = 0;
      size_t i = 0;
      while(i<query.size()){
        if(query[i]!=pattern[j]){
          if(query[i]>='A'&&query[i]<='Z'){
            return false;
          }
          pattern.insert(j,1,query[i]);
          if(j>i)break;
        }
        i++;
        j++;
      }
      return query == pattern;
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
      vector<bool> ans;
      for(string& s:queries){
        ans.push_back(match(s,pattern));
      }
      return ans;
    }
};
// @lc code=end

