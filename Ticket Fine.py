for i in range (int(input())):
    x,p,q=map(int,input().split())
    if p>q:
        s=p-q
        f=x*s 
        print(f)
    else:
        print(0)