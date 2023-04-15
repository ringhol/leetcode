/*
 * @lc app=leetcode.cn id=1689 lang=golang
 *
 * [1689] 十-二进制数的最少数目
 */
package leetcode

// @lc code=start
func minPartitions(n string) int {
	var m byte = 0
	for i := 0; i < len(n); i++ {
		if n[i] > m {
			m = n[i]
		}
	}
	return int(m) - '0'
}

// @lc code=end
