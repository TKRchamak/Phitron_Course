# def square(x):
#     return x*x

# print(square(4))

# square= lambda x,y : x*y
# def square(x, y): return x*y


# print(square(4, 5))


# def lamb(x): return x ** 3


# print(lamb(5))


numbers = [45, 12, 78, 95, 4, 68, 24, 35, 97]

# lambda create to single line function
squaresNUm = map(lambda x: x*x, numbers)

biggerNum = filter(lambda x: x > 50, numbers)

print(list(biggerNum))


actors = [
    {'name': 'toma', 'age': 35},
    {'name': 'tobla', 'age': 45},
    {'name': 'tumpa', 'age': 25},
    {'name': 'dhol', 'age': 40},
    {'name': 'madol', 'age': 15},
]

juniorActor = filter(lambda actor: actor['age'] > 35, actors)

print(list(juniorActor))
