for i in range (int(input())):
    x,y=map(int,input().split())
    tot_dis=2*y
    tot_per_lit=x*15
    if (tot_dis<=tot_per_lit):
        print("Yes")
    else:
        print("No")