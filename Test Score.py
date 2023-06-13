for i in range (int(input())):
    n,x,y=map(int,input().split())
    totmarks=n*x 
    if y<=totmarks and y%x==0:
        print("Yes")
    else:
        print("No")