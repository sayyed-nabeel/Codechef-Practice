t=int(input())
for i in range (t):
    n,a,b,c=map(int,input().split())
    if n<=b and (a+c)>=n:
        print("YES")
    else:
        print("NO")