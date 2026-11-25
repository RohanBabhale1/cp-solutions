func maxDifference(nums []int) int64 {
	n := len(nums)
	g := make([]int, n+2)
	for i := n - 1; i >= 0; i-- {
		x := nums[i]
		if x%3 == 0 {
			g[i] = x - g[i+1]
		} else {
			g[i] = x + g[i+1]
		}
		if i+1 < n {
			y := x + nums[i+1]
			if y%3 == 0 {
				g[i] = max(g[i], y-g[i+2])
			} else {
				g[i] = max(g[i], y+g[i+2])
			}
		}
	}
	return int64(g[0])
}
