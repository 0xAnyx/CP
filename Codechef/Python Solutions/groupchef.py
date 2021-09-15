def func(s,l):
    c=0
    for k in range(l):
        if k<l-1:
            if(s[i]=='0' and s[i+1]=='1'):
                c=c+1

    if (s[0]=='1'):
        c=c+1
    print(c)

t=int(input())

for i in range(t):
    s=input()
    l=len(s)
    func(s,l)
