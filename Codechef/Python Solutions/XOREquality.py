def fun(n1, n2, n3):
    res = 1
    while (n2 > 0):
        if (n2 & 1):
            res = (res * n1) % n3
        n2 = n2 >> 1
        n1 = (n1 ** 2) % n3
    return res


x = 1000000007
t = int(input())
for _ in range(t):
    n = int(input())
    ans = fun(2, n - 1, x)
    print(ans)