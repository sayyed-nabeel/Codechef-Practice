# cook your dish here
for i in range (int(input())):
    n=int(input())
    list1=[]
    for i in range (n):
        list1.append(int(input()))
    for j in list1:
        if list1.count(j)%2!=0:
            print(j)
            