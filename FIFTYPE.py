for i in range (int(input())):
    n=int(input())
    time=0
    while (n!=50):
        if(n<50):
            n=n+2
            time +=1
        elif(n>50):
            n=n-3
            time +=1
    print(time)