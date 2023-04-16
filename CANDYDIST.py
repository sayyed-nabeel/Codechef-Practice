t=int(input())
i=0
for i in range(t):
    a,b=map(int,input().split())
    y=a/b
    if(y%2==0):
        print("YES")
    else:
        print("NO")