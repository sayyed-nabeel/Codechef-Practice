for i in range (int(input())):
    x,y,z=map(int,input().split())
    if z%x==0 and z%y==0:
        print("Any")
    elif z%y==0:
        print("Duck")
    elif z%x==0:
        print("Chicken")
    else:
        print("None")