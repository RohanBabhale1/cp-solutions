func countConsistent(nums []int) int64 {
	var last [1000001]int
	var vs, st []int
	ans := 0
	for r := range nums {
		x := nums[r]
		last[x] = r + 1
		vs = append(vs, x)
		st = append(st, r)
		k := 0
		for i := range vs {
			v := vs[i] & x
			if k > 0 && vs[k-1] == v {
				continue
			}
			vs[k], st[k] = v, st[i]
			k++
		}
		vs, st = vs[:k], st[:k]
		for i := 0; i < k; i++ {
			hi := r
			if i+1 < k {
				hi = st[i+1] - 1
			}
			ans += max(0, min(hi, last[vs[i]]-1)-st[i]+1)
		}
	}
	return int64(ans)
}
