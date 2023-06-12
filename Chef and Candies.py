for i in range(int(input())):
    n,x=map(int,input().split())
    req=n-x
    if req<=0 :
        print(0)
    elif req<4:
        print(1)
    elif req%4==0:
        print(int(req/4))
    else:
        print(int((req//4)+1))