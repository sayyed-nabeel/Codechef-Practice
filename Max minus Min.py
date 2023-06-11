for i in range (int(input())):
    a,b,c=map(int,input().split())
    x=max(a,b,c)
    y=min(a,b,c)
    z=x-y
    print(z)