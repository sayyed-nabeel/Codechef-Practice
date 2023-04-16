t=int(input())

for i in range (t):
    n,x=map(int,input().split())
    a=[]
    for j in range (n):
        s,r=map(int,input().split())
        if s<=x:
            a.append(r)
    print(max(a))
            
            