for i in range (int(input())):
    n,x,y=map(int,input().split())
    if (n-(x*y)>0):
        print("No")
    else:
        print("Yes")