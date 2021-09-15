import re

t=int(input())
a1='[AEIOU]'
b1='[aeiou]'
while(t>0):
    string = input()
    caps = re.findall(a1, string)
    small = re.findall(b1, string)
    if(set(a1)==set(caps)) or (set(b1)==set(small)):
        print("lovely string")
    else:
        print("ugly string")
    t-=1

