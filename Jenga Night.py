for i in range (int(input())):
    n,x=map(int,input().split())
    if x>=n and x%n==0:
        print("Yes")
    else:
        print("No")