# cook your dish here
for i in range (int(input())):
    a,b,c=map(int,input().split())
    tot_mrks=a+b+c 
    if tot_mrks>=100 and (a>=10 and (b>=10 and c>=10)):
        print("PASS")
    else:
        print("FAIL")