for i in range (int(input())):
    n,x=map(int,input().split())
    if n<=6:
        print((x))
    elif n%6==0:
        print(int((n/6)*x))
    else:
        print(int(((n//6)+1)*x))
        
