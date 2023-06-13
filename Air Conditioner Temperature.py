for i in range (int(input())):
    a,b,c=map(int,input().split())
    if (a<=b and c<=b) and (a>=c or c>=a):
        print("Yes")
    else:
        print("No")