for i in range (int(input())):
    x,y=map(int,input().split())
    s=x-y
    if (y<x):
        print(s)
    else:
        print(0)