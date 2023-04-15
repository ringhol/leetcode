/*
 * @lc app=leetcode.cn id=1678 lang=golang
 *
 * [1678] 设计 Goal 解析器
 */
package leetcode

import "strings"

// @lc code=start
func interpret(command string) string {
	res := &strings.Builder{}
	for i := 0; i < len(command); i++ {
		cur := command[i]
		if cur == 'G' {
			res.WriteByte('G')
		} else if cur == '(' {
			if command[i+1] == 'a' {
				res.WriteString("al")
			} else {
				res.WriteByte('o')
			}
		}
	}
	return res.String()
}

// @lc code=end
