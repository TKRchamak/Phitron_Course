# numbers = [45, 12, 78, 95, 4, 68, 24, 35, 97]

# ondNums = [num for num in numbers if num % 2 == 1 if num % 5 == 0]
# print(list(ondNums))


names = ['sakib', 'tamim', 'abid']
ages = [34, 41, 12]

pairs = [(name, age) for name in names for age in ages if age < 21]
print(pairs)
