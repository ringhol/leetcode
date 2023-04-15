/*
 * @lc app=leetcode.cn id=2315 lang=golang
 *
 * [2315] 统计星号
 */
package leetcode

// @lc code=start
func countAsterisks(s string) int {
	sum := 0
	flag := true
	for i := 0; i < len(s); i++ {
		if flag && s[i] == '*' {
			sum++
		}
		if s[i] == '|' {
			flag = !flag
		}

	}
	return sum
}

// @lc code=end
