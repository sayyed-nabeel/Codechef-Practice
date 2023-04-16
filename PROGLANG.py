t=int(input())

for i in range (t):
    a,b,x,y,p,q=map(int,input().split())
    if a in (x,y) and b in (x,y):
        print("1")
    elif a in (p,q) and b in (p,q):
        print("2")
    else:
        print("0")