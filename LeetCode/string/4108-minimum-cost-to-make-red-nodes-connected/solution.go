func minCost(n int, colors string, edges [][]int) int64 {
	d := make([]int, n)
	x := make([]int, n)
	z := make([]int, n)
	b := make([]int, n)
	f := make([]int, n)
	for _, e := range edges {
		d[e[0]]++
		d[e[1]]++
		x[e[0]] ^= e[1]
		x[e[1]] ^= e[0]
	}
	q := make([]int, 0, n)
	for i := range d {
		z[i] = 1
		if d[i] == 1 && i > 0 || d[i] == 0 {
			q = append(q, i)
		}
	}
	mn := 0
	for i := 0; i < len(q); i++ {
		u := q[i]
		if colors[u] == 'R' {
			b[u] += z[u]
		} else {
			f[u] += z[u]
		}
		mn = min(mn, f[u]-b[u])
		if u == 0 {
			continue
		}
		p := x[u]
		z[p] += z[u]
		b[p] += b[u]
		f[p] += min(b[u], f[u])
		x[p] ^= u
		d[p]--
		if d[p] == 1 && p > 0 || d[p] == 0 {
			q = append(q, p)
		}
	}
	return int64(b[0] + mn)
}
