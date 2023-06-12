for i in range (int(input())):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if c-a>=0 and d-b>=0:
        print("POSSIBLE")
    else:
        print("IMPOSSIBLE")