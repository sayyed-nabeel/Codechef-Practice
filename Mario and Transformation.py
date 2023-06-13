for i in range (int(input())):
    x=int(input())
    lst=["Normal","Huge","Small"]
    if x%3==0:
        print(lst[0])
    else:
        s=x%3
        print(lst[s])