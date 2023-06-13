for i in range (int(input())):
    a,b=map(int,input().split())
    if (a+b)==2 or ((a+b)%2!=0 and (a+b)!=9):
        print("Alice")
    else:
        print("Bob")