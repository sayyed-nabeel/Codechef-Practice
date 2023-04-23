for i in range(int(input())):
    n=int(input())
    min=n//20
    if min == 0:
        print(n)
    else:
        print(n-(20*min))