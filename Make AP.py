for i in range (int(input())):
    a,c=map(int,input().split())
    if ((c-a)%2)==0:
        b=a+1*((c-a)/2)
        print(int(b))
    else:
        print(-1)