for i in range (int(input())):
    x=int(input())
    if x==0 or x%3==0:
        print(0)
    else:
        print(3-(x%3))