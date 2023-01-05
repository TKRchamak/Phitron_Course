'''
    dictionary comprehension
'''

# example - 1
# dct = {i: i+10 for i in range(10)}
# print(dct)


# example - 2
# dct = {'jack': 22, 'rahim': 23, 'karim': 42}
# newDct = {k: v for k, v in dct.items() if v % 2 == 0}
# print(newDct)


# example - 3
# dct = {'jack': 22, 'rahim': 23, 'karim': 42}
# newDct = {k: v for k, v in dct.items() if v % 2 == 0 if v > 20}
# print(newDct)


# example - 4
# dct = {'jack': 22, 'rahim': 23, 'karim': 62}
# newDct = {k: ('old' if v >= 50 else 'young') for k, v in dct.items()}
# print(newDct)


# example - 5
# dct = {k1: {k2: k2*k1} for k2 in range(6) for k1 in range(3)}
# print(dct)
