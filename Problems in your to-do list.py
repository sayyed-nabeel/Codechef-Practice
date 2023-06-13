for i in range (int(input())):
    n=int(input())
    d=list(map(int,input().split()))
    count=0
    for i in range (n):
        if d[i]>=1000:
            count=count+1 
    print(count)
        