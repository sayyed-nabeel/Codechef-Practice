for i in range (int(input())):
    n=str(input())
    x=n[0]+n[len(n)-1]
    y=int(x)
    s=0
    while y!=0:
        s=s+(y%10)
        y=y//10
    print(s)
