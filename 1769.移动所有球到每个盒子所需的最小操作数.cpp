/*
 * @lc app=leetcode.cn id=1769 lang=cpp
 *
 * [1769] 移动所有球到每个盒子所需的最小操作数
 */
#include<vector>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int left = boxes[0] - '0', right = 0, operations = 0;
        int n = boxes.size();
        for (int i = 1; i < n; i++) {
            if (boxes[i] == '1') {
                right++;
                operations += i;
            }
        }
        vector<int> res(n);
        res[0] = operations;
        for (int i = 1; i < n; i++) {
            operations += left - right;
            if (boxes[i] == '1') {
                left++;
                right--;
            }
            res[i] = operations;
        }
        return res;
    }
};
// @lc code=end

