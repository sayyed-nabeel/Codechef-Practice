for i in range (int(input())):
    s,x,y,z=map(int,input().split())
    s_left=s-(x+y)
    if s_left>=z:
        print(0)
    elif (x+z)<=s or (y+z)<=s:
        print("1")
    else:
        print("2")