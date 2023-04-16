t=int(input())
i=0
for i in range(t):
    x=int(input())
    if(x<=100):
        print(x)
    elif(x<=1000):
        x=x-25
        print(x)
    elif(x<=5000):
        x=x-100
        print(x)
    elif(x>5000):
        x=x-500
        print(x)
        
