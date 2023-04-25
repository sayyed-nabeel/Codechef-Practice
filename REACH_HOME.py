for i in range (int(input())):
    x,y=map(int,input().split())
    if (y>(5*x)):
        print("No")
    else:
        print("Yes")