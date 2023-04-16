t=int(input())
i=0
for i in range(t):
    x,y=map(int,input().split())
    qual=x+(((7)/100)*x)
    if(y<=qual):
        print("YES")
    else:
        print("NO")