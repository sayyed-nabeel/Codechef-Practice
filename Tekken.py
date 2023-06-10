# cook your dish here
red=0
for i in range (int(input())):
    a,b,c=map(int,input().split())
    red=min(b,c)
    x=b-red
    y=c-red
    sum=x+y
    if a!=0 and a>sum:
        print("YES")
    else:
        print("NO")