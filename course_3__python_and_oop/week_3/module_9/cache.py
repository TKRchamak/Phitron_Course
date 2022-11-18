from functools import cache


@cache
def fib(n):
    if n <= 1:
        return 1

    return fib(n-1) + fib(n-2)


# print(fib(50))

for i in range(30):
    print(i, fib(i))
