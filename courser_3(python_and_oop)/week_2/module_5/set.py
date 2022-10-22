numbers_list = [11, 22, 33, 44, 55, 66, 77, 88, 99, 11, 55, 44]
number_set = {33, 66, 99, 100, 11, 44, 77, 55, 88}
print(numbers_list)


# no duplicate value in set
# its mutable

# numbers_set = {11, 22, 33, 44, 55, 66, 77, 88, 99, 11, 55, 44}
numbers_set = set(numbers_list)
numbers_set.add(100)
numbers_set.remove(22)
print(numbers_set)
