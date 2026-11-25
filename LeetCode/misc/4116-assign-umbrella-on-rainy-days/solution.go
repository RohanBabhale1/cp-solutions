func assignUmbrella(rain []int) []string {
    r:=make([]string,len(rain))
x,y:=0,0
for i:=range rain{
    if rain[i]==0{
        r[i]="None"
        continue
    }
    if i<len(rain)-1&&rain[i+1]==1&&x<=y{
        r[i]="Alice"
        x++
    }else{
        r[i]="Bob"
        y++
    }
}
return r
}
