for i in range (int(input())):
    a,b,x,y=map(int,input().split())
    if b>a:
        if (b-a)<=x:
            print("Yes")
        else:
            print("No")
    else:
        if (a-b)<=y:
            print("Yes")
        else:
            print("No")