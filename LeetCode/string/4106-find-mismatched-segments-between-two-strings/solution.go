func findMismatchedSegments(s1 string, s2 string) [][]string {
	r := make([][]string, 0)
	for i := 0; i < len(s1); {
		if s1[i] == s2[i] {
			i++
			continue
		}
		j := i
		for j < len(s1) && s1[j] != s2[j] {
			j++
		}
		r = append(r, []string{s1[i:j], s2[i:j]})
		i = j
	}
	return r
}
