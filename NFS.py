for i in range (int(input())):
    u,V,a,s=map(int,input().split())
    v=(u**2 - 2*a*s)
    if v<=V**2:
        print("Yes")
    else:
        print("No")