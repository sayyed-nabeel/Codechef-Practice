for i in range (int(input())):
    n,x,k=map(int,input().split())
    if x>k:
        print("0")
    elif (n*x)<=k:
        print(n)
    else:
        print(k//x)