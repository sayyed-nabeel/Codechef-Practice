for i in range (int(input())):
    w1,w2,x1,x2,m=map(int,input().split())
    chg=w2-w1
    if chg>=x1*m and chg<=x2*m:
        print(1)
    else:
        print(0)