/*
 * @lc app=leetcode.cn id=28 lang=golang
 *
 * [28] 找出字符串中第一个匹配项的下标
 */
package leetcode

// @lc code=start
func strStr(haystack string, needle string) int {
	//记录下一次开始匹配的下标
	for i := 0; i <= len(haystack)-len(needle); i++ {
		//开始一个一个比较
		a := i
		b := 0
		for b < len(needle) && haystack[a] == needle[b] {
			a++
			b++
		}
		if b == len(needle) {
			return i
		}
	}
	return -1
}

// @lc code=end
