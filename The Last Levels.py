for i in range (int(input())):
    x,y,z=map(int,input().split())
    if x%3==0:
        print((y*x)+(z)*((x//3)-1))
    else:
        print((y*x)+z*(x//3))