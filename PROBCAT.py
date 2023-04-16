t=int(input())

for i in range (t):
    x=int(input())
    if x in range (0,100):
        print("Easy")
    elif x in range (100,200):
        print("Medium")
    else:
        print("Hard")
            