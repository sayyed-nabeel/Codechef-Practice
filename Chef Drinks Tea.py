for i in range (int(input())):
    x,y,z=map(int,input().split())
    refill=0
    if x%y==0:
        refill=x//y
    else:
        refill=((x//y)+1)
    cost=refill*z  
    print(cost)