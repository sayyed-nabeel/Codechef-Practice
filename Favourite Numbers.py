for i in range (int(input())):
    a=int(input())
    if a%7==0 and a%2==0:
        print("Alice")
    elif a%9==0 and a%2==1:
        print("Bob")
    else:
        print("Charlie")