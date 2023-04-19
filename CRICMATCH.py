for i in range (int(input())):
    n,m=map(int,input().split())
    maxim=m*6*6
    if(n>maxim):
        print("No")
    else:
        print("Yes")