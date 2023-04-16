t=int(input())
i=0
for i in range(t):
    n,m=map(int,input().split())
    if(m>=n):
        right=n*2
        print(right)
    elif(m<n):
        left=n-m
        right=n*2
        print(right+left)




