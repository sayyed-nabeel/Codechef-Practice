for i in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    count=0
    run=0
    for i in range (n):
        run+=a[i]
        strike_rate= (run/(1+i))*100
        if(strike_rate==100):
            count+=1
    print(count)
