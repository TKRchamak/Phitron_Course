# max, min, sorted, reversed,


numbers = [45, 12, 78, 95, 4, 68, 24, 35, 97]

# numbers = sorted(numbers, reverse=True)
# print(numbers)

# numbers = reversed(numbers)
# print(list(numbers))


actors = [
    {'name': 'aoma', 'age': 35},
    {'name': 'tobla', 'age': 45},
    {'name': 'txumpa', 'age': 25},
    {'name': 'dhol', 'age': 40},
    {'name': 'madol', 'age': 15},
]


# actors = sorted(actors, key=lambda actor: actor['name'])
# print(actors)

actors = sorted(actors, key=lambda actor: actor['age'], reverse=True)
print(actors)
