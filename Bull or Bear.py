for i in range (int(input())):
    x,y=map(int,input().split())
    s=y-x
    if (s == 0):
        print("NEUTRAL")
    elif (s > 0):
        print("PROFIT")
    else:
        print("LOSS")