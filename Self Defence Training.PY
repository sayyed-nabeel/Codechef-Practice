for i in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    count=0
    for i in range (n):
        if a[i]>=10 and a[i]<=60:
            count=count+1 
    print(count)