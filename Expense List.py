for i in range (int(input())):
    n,x=map(int,input().split())
    earn=2**x 
    for i in range (n):
        earn=earn-(earn//2)
    print(earn)