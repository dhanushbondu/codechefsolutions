t=int(input())
for _ in range(t):
    n=int(input())
    count=0
    i=0;
    for i in range(1,n+1):
        if n%i==0:
            count+=1
    if count==2:
        print('yes')
    else:
        print('no')