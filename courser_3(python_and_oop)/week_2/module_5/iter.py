numbers = [45, 12, 78, 95, 4, 68, 24, 35, 97]
iter_number = iter(numbers)

try:
    print(next(iter_number))
    print(next(iter_number))
    print('take a break')
    print('take a break')
    print(next(iter_number))
    print(next(iter_number))
    print(next(iter_number))
    print(next(iter_number))
    print('take a break')
    print('take a break')
    print('take a break')
    print(next(iter_number))
    print(next(iter_number))
    print(next(iter_number))
    print(next(iter_number))


except StopIteration:
    print("StopIteration")
