/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] N 字形变换
 */
#include<string>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows < 2) return s;
      vector<string> rows(numRows);
      int flag = -1;
      int i=0;
      for(char c:s){
        rows[i]+=c;
        if(i==0||i==numRows-1)flag=-flag;
        i+=flag;
      }
      string res;
      for(string &s:rows){
        res+=s;
      }
      return res;
    }
};
// @lc code=end