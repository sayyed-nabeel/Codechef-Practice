t=int(input())
i=0
for i in range(t):
    x,y=map(int,input().split())
    if(x>=y):
        print("YES")
    else:
        print("NO")