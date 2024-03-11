t=int(input())
for _ in range(t):
    a,b,c=map(int,input().split())
    res=0
    for i in range(1,c+1):
        res=res+2
    if res+a>=b:
        print('YES')
    else:
        print('NO')