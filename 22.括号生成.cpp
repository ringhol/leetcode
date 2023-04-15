/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */
#include<string>
#include<vector>
#include<deque>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int size = n * 2 - 1;
        vector<string>res(size);
        for(int i = 0;i < size;i++){
            deque<char> stack;
            stack.push_back('(');
        }
    }
};
// @lc code=end

