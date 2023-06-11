for i in range (int(input())):
    k,x=map(int,input().split())
    if x<k:
        print(k-x)
    else:
        print(0)