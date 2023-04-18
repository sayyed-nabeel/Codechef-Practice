for i in range (int(input())):
    a,b,c,d,k=map(int,input().split())
    x=abs(c-a)+abs(d-b)
    if x==k:
        print("Yes")
    elif k>x and (k-x)%2==0:
        print("Yes")
    else:
        print("No")
