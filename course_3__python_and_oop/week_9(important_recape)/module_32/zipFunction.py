'''zip'''

# nums = [1, 2, 3]
# numsFloat = {1.5, 2.4, 3.4}
# string = ['one', 'two', 'three']
# new_obj = zip(nums, string, numsFloat)
# print(set(new_obj))
# print(tuple(new_obj))
# print(list(new_obj))


names = ['rahim', 'karim', 'jodu']
salaries = [10000, 20000, 15000]
# print(list(zip(names, salaries)))

# new_bd = {name: salary for name, salary in zip(names, salaries)}
# print(new_bd)


res = list(zip(names, salaries))
names2, salaries2 = zip(*res)
print(names2)
print(salaries2)
