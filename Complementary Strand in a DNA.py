for i in range (int(input())):
    n=int(input())
    s=input()
    new_str=''
    for i in range (n):
        if s[i]=="A":
            new_str=new_str+"T"
        elif s[i]=="T":
            new_str=new_str+"A"
        elif s[i]=="C":
            new_str=new_str+"G"
        elif s[i]=="G":
            new_str=new_str+"C"
    print(new_str)
    