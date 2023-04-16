t=int(input())
i=0
for i in range(t):
    x,y=map(int,input().split())
    steps=abs(x-y)
    print(steps)