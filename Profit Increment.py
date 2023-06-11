for i in range (int(input())):
    x,y=map(int,input().split())
    cp=x-y
    nsp=(x/10)+x
    np=nsp-cp
    print(int(np))