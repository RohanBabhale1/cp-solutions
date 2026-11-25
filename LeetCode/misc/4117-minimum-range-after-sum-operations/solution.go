func minRange(a int, b int, c int) int {
x,y:=max(a,b,c),min(a,b,c)
return min(x-y,a+b+c-x-y)    
}
