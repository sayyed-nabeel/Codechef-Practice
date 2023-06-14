lst=[]
for i in range (int(input())):
    x=int(input())
    lst.append(x)
lst.sort()
for i in range (0,len(lst)):
    print(lst[i])