func countSuffix(nums []int, target []int) []int {
	n, m := len(nums), len(target)
	s := make([]int, 0, n+m+1)
	s = append(s, nums...)
	s = append(s, 0)
	s = append(s, target...)
	z := make([]int, len(s))
	l, r := 0, 0
	for i := 1; i < len(s); i++ {
		if i < r {
			z[i] = min(r-i, z[i-l])
		}
		for i+z[i] < len(s) && s[z[i]] == s[i+z[i]] {
			z[i]++
		}
		if i+z[i] > r {
			l, r = i, i+z[i]
		}
	}
	rs := make([]int, m)
	for j := 1; j < m; j++ {
		rs[j] = rs[j-1]
		if target[j] > target[j-1] {
			rs[j] = j
		}
	}
	var c [100001]int
	q := 0
	for i := 0; i < n; i++ {
		q += 1 - 2*c[nums[i]]
		c[nums[i]]--
		q += 2*c[target[i]] + 1
		c[target[i]]++
	}
	ans := make([]int, m-n+1)
	for k := range ans {
		if k > 0 {
			y := target[k-1]
			q += 1 - 2*c[y]
			c[y]--
			y = target[k+n-1]
			q += 2*c[y] + 1
			c[y]++
		}
		if q == 0 {
			ans[k] = max(0, min(z[n+1+k], n-1)-max(rs[k+n-1], k)+k+1)
		}
	}
	return ans
}
