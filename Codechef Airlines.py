for i in range (int(input())):
    x,y,z=map(int,input().split())
    if y<10*x:
        print(y*z)
    else:
        print(10*x*z)