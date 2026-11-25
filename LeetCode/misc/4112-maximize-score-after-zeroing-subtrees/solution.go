func maxScore(parent []int, op []int, score []int) int {
	n := len(parent)
	d := make([]int, n)
	s := make([]int, n)
	mn := make([]int, n)
	for i := range mn {
		mn[i] = 1 << 62
	}
	for i := 1; i < n; i++ {
		d[parent[i]]++
	}
	q := make([]int, 0, n)
	for i := range d {
		if d[i] == 0 {
			q = append(q, i)
		}
	}
	for i := 0; i < len(q); i++ {
		u := q[i]
		w := mn[u]
		if w == 1<<62 {
			w = 0
		}
		if op[u] == 0 {
			w = min(w, 0)
		}
		f := score[u] + s[u] - w
		if u == 0 {
			return f
		}
		p := parent[u]
		s[p] += f
		mn[p] = min(mn[p], f)
		d[p]--
		if d[p] == 0 {
			q = append(q, p)
		}
	}
	return 0
}
