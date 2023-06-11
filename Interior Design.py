for i in range (int(input())):
    x1,y1,x2,y2=map(int,input().split())
    c1=x1+y1
    c2=x2+y2
    s=min(c1,c2)
    print(s)