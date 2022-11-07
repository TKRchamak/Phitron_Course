def exp(a, n):
    res = pow(int(a), int(n))
    return res


p, q = input('enter numbers: ').split()
x = exp(p, q)
print(f'result is:', x)
