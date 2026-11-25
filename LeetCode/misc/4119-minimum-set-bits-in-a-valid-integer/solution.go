func minSetBits(nums []int, k int) int {
    var g[1<<17]bool
var c[17]int
for i:=range nums{
    for j:=0;j<17;j++{
        c[j]+=nums[i]>>j&1
        if i>=k{
            c[j]-=nums[i-k]>>j&1
        }
    }
    if i>=k-1{
        x:=0
        for j:=0;j<17;j++{
            if c[j]==k{
                x|=1<<j
            }
        }
        g[x]=true
    }
}
for j:=0;j<17;j++{
    for z:=0;z<1<<17;z++{
        if z>>j&1==1&&g[z^1<<j]{
            g[z]=true
        }
    }
}
ans:=1<<62
for y:=1;y<1<<17;y++{
    if g[1<<17-1^y]{
        continue
    }
    p:=0
    for t:=y;t>0;t&=t-1{
        p++
    }
    ans=min(ans,p)
}
if ans==1<<62{
    return -1
}
return ans
}
