t=int(input())
i=0
for i in range (t):
    a,b,c=map(int,input().split())
    if((a<=b) and (c<=b)):
        if(((a+c)/2)<35):
            print("FAIL")
        else:
            print("PASS")
    elif((b<=a) and (c<=a)):
        if(((b+c)/2)<35):
             print("FAIL")
        else:
            print("PASS")
    elif((b<=c) and (a<=c)):
        if(((b+a)/2)<35):
             print("FAIL")
        else:
            print("PASS")