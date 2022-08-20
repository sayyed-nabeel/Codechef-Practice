n=int(input())
for i in range (n):
    a,b,c=map(int,input().split())
    if((a<=b)and c<=b):
        print("Yes")
    else:
        print("No")