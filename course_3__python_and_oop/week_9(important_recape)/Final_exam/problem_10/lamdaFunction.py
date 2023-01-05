# even_odd = lambda x :('Yes' if x % 2 == 0 else 'No')
# def even_odd(x): return ('Yes' if x % 2 == 0 else 'No')


# print(even_odd(6))


# lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
# print(lst[2::3])

# s = ''
# num = 7

# for i in range(1, num+1):
#     s += str(i)

# for i in range(num):
#     newList = list(s)
#     newList.remove('1')
#     newList.insert(i, '1')
#     s = "".join(newList)
#     print(s)


data = [{'a': 5, 'b': 10}, {'x': 15, 'y': 20}]
for val in data:
    for key, val2 in val.items():
        print(f"Key:{key} Value:{val2}")
