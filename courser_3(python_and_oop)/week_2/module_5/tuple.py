numbers_list = [11, 22, 33, 44, 55, 66, 77, 88, 99, 11, 55, 44]
number_tuples = 11, 22, 33, 44, 55, 66, 77, 88, 99, 11, 55, 44
print(numbers_list)


# no duplicate value in set
# its mutable

# numbers_set = {11, 22, 33, 44, 55, 66, 77, 88, 99, 11, 55, 44}
numbers_set = set(numbers_list)
numbers_set.add(100)
numbers_set.remove(22)
print(numbers_set)


# its not mutable or immutable

numbers_tuple = tuple(numbers_list)
print(numbers_tuple)


# but the inner content are mutable
new_numbers_tuple = ([11, 22, 33], [44, 55, 66, 77])
new_numbers_tuple[0][0] = 100
print(new_numbers_tuple[0])
