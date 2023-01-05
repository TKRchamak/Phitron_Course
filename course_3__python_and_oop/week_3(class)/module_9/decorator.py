import math


def timer(func):
    def inner(*args, **kwargs):  # *args, **kwargs use to unknown agrument
        print("Time start now")
        func(*args, **kwargs)
        print("Time end now")
    return inner


'''@ use to decorator its'''


@timer
def make_factorial(n):
    res = math.factorial(n)
    print(res)


'''call timer function and send a function as a parameter'''
# timer(make_factorial)()

make_factorial(10)
