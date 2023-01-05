'''
    list comprehension
'''

# list comprehension

# example - 1
# [expression for i in range()]

# lst = ['hallo', 'world', 'python']
# newLst = [x.upper() for x in lst]
# print(newLst)


# example - 2
# lst = [i for i in range(1, 10)]
# lst = list(range(1, 10))
# print(lst)


# example - 3
# s = 'hello'
# print(list(s))
# lst = [i for i in s]
# print(lst)


# example - 4
# lst = [x for x in range(1, 20) if x % 2 == 0]
# print(lst)


# example - 5
# lst = [x for x in range(1, 100) if x % 3 == 0 if x % 5 == 0]
# print(lst)


# example - 6
# lst = ['EVEN' if x % 2 == 0 else 'ODD' for x in range(20)]
# print(lst)


# example - 7
# lst = [(x, y) for x in [1, 2, 3, 4, 5] for y in [6, 7, 8, 9]]
# print(lst)
