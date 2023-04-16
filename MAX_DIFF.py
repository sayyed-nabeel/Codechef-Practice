for i in range(int(input())):
    n,s=map(int,input().split())
    if s<=n:
        d=s
    else:
        d=(n-s)+n
    print(d)
           