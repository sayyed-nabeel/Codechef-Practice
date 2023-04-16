t=int(input())
i=0
for i in range(t):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if((c-a)<0 or (d-b)<0):
        print("IMPOSSIBLE")
    else:
        print("POSSIBLE")

