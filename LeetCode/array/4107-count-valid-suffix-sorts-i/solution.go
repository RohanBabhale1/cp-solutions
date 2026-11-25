func countSuffix(nums []int, target []int) int {
	n := len(nums)
	f := 0
	for f < n && nums[f] == target[f] {
		f++
	}
	var c [100001]int
	nz, r := 0, 0
	for i := n - 1; i >= 0; i-- {
		if i < n-1 && target[i] < target[i+1] {
			break
		}
		x, y := nums[i], target[i]
		if c[x] != 0 {
			nz--
		}
		c[x]++
		if c[x] != 0 {
			nz++
		}
		if c[y] != 0 {
			nz--
		}
		c[y]--
		if c[y] != 0 {
			nz++
		}
		if nz == 0 && i <= f {
			r++
		}
	}
	return r
}
