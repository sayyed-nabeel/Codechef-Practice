# cook your dish here
t=int(input())

for i in range (t):
    n,x=map(int,input().split())
    for j in range (n):
        s,r=map(int,input().split())
        a=[]
        if s<=x:
            a.append(r)
    print(max(a))
            
            