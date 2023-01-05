def greet():
    print('thats working')


greet()

# a = lambda arg : expression
# a = lambda : print('this is working')
# a()


# example-1
s = 'Phitron'
# reverseString = lambda str: str.upper()[::-1]
# def reverseString(str): return str.upper()[::-1]
# print(reverseString(s))

# example-2
# mx = lambda a,b : a if(a>b) else b
# print(mx(6, mx(3,4)))

# example-3
# lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
# newList = [lambda arg = x : arg*2 for x in lst]

# def a(x):
#     return a*2

# for i in lst:
#     print(a(i))
# print(newList)


# example-4
# filter, map, reduce

my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]
# newList = list(filter(lambda x: (x % 2 == 0), my_list))
# print(newList)

newList = list(map(lambda x: x*2 if (x % 2 == 0) else x, my_list))
print(newList)
