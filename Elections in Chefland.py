for i in range (int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    count=0
    for i in range (n):
        if a[i]>=x:
            count=count+1
    print(count)