for i in range (int(input())):
    x,y=map(int,input().split())
    s=abs(x-y)
    if s==0 and (x!=0 or y!=0):
        print("YES")
    else:
        print("NO")