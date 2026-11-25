func minOperations(nums []int) int {
    n:=len(nums)
if n<3{
    return -1
}
m:=2049
l:=make([]int,n*m)
r:=make([]int,n*m)
for v:=1;v<m;v++{
    l[v]=max(nums[0]-v,v-nums[0])
    r[(n-1)*m+v]=max(nums[n-1]-v,v-nums[n-1])
}
for i:=1;i<n;i++{
    pm,qm:=1<<40,1<<40
    j:=n-1-i
    for v:=1;v<m;v++{
        l[i*m+v]=pm+max(nums[i]-v,v-nums[i])
        pm=min(pm,l[(i-1)*m+v])
        r[j*m+v]=qm+max(nums[j]-v,v-nums[j])
        qm=min(qm,r[(j+1)*m+v])
    }
}
ans:=1<<62
for i:=1;i<n-1;i++{
    for v:=1;v<m;v++{
        ans=min(ans,l[i*m+v]+r[i*m+v]-max(nums[i]-v,v-nums[i]))
    }
}
return ans
}
