# 1. tuple[0] --->access number by index
# 2. tuple[0] = 45 -----> this is not possible cause its immutable
# 3. tuple[0][0] ---------> but inner content is mutable/ change able


numbers_list = [11, 22, 33, 44, 55, 66, 77, 88, 99, 11, 55, 44]
number_tuples = 11, 22, 33, 44, 55, 66, 77, 88, 99, 11, 55, 44
# print(numbers_list)

numbers_tuple = tuple(numbers_list)
# print(numbers_tuple)

# but the inner content are mutable
new_numbers_tuple = ([11, 22, 33], [44, 55, 66, 77])
new_numbers_tuple[0][0] = 100
# print(new_numbers_tuple[0])


aTuple = ("Orange", [10, 20, 30], (5, 15, 25))
print(aTuple[1:2])
