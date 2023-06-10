# cook your dish here
for i in range (int(input())) :
    x=list(map(int,input().split()))
    y=input()
    cost=0
    l=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    for i in range (len(l)):
        if(l[i] not in y):
            cost += x[i]
    print(cost)