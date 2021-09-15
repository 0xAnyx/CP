import re

def count(string):
    pattern='[^aeiou](a|e|i|o|u)]'
    result= re.findall(pattern,string)
    c=len(result)
    print(c)

t= int(input())
while(t>0):
    num=int(input())
    str1=input()
    print(count(str1[:num]))
    t-=1








