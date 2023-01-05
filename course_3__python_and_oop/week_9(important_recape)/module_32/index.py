''' int, float, string 
    tuple, list, dictionary, set

'''

s = 'I love bangladesh'
s[0] = 'i'  # this is not possible
s.lower()
s.upper()
s[0:0:-1]  # for reverse
# print('I' in s)
# print(s)
# print(s[0].isalpha())  # check alphabet
numS = '3335'
# print(numS.isalnum())  # check number

lst = [1, 2, 3, 2, 2, 5, 8, 7]
lst1 = [1, 5, 5, 87, 4, 6]
# print(lst.count(2))  # how many 2 in the lst
lst = lst + lst1  # add 2 array
lst.append(100)  # list er ses a add hoye jabe
lst.extend(lst1)  # onno r akta list k add korte chaile extend korte hobe
lst.extend([1, 5, 5, 87, 4, 6])
# print(1 in lst)

tpl = (1, 2, 3, 4, 5)
# print(tpl[2])
# tpl[2] = 10 # this is not possible, cause tuple is not possible assignment
tpl1 = (4, 3)  # it accept duplicate value
tuple1 = ("abc", 34, True, 40, "male")  # tuple contain different type of data
tpl = tpl + tpl1
# print(tpl)

dct = {'rahim': 12, 'karim': 20}
# print(dct['faisal'])  # that gives error
# print(dct.get('faisal'))  # that did not give error and return none
# print(dct.get('foysal', False))  # that return value of false

a = [(1, 'a'), (2, 'b'), (3, 'v')]
a = dict([(1, 'a'), (2, 'b'), (3, 'v')])  # that return a dictionary
# a.pop(3)
# a.keys()
# a.values()
# for key, value in a.items():
#     print(key, value)
# print(a)


# set
st = {1, 2, 3, 4, 5, 2, 1, 2, 1}
# print(st)  # did not contain duplicate value
