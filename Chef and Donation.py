for i in range (int(input())):
    x,y=map(int,input().split())
    d=y-x
    if(y>x):
        print(d)
    else:
        print(0)