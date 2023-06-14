for i in range (int(input())):
    x,y,z=map(int,input().split())
    min_time=(y//x)
    if min_time<z:
        print(z-min_time)
    else:
        print(0)