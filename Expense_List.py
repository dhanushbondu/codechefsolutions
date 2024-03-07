t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    inc=pow(2,b)
    for i in range(a):
        dis=inc//2
        inc=inc-dis
    print(inc)