for i in range (int(input())):
    n,m=map(int,input().split())
    if(n>m):
        print(abs(m-n))
    else:
        print("0")