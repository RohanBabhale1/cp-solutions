func countConsistent(nums []int) int {
	r := 0
	for i := range nums {
		a, m := nums[i], nums[i]
		for j := i; j < len(nums); j++ {
			a &= nums[j]
			m = min(m, nums[j])
			if a == m {
				r++
			}
		}
	}
	return r
}
