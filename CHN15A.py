t=int(input())
for _ in range(t):
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    count=0
    for i in range(0,n):
        l[i]=l[i]+x
        if l[i]%7==0:
            count+=1
    print(count)
