numbers = [45, 12, 78, 95, 4, 68, 24, 35, 97]

# print(numbers[0])
# print(numbers[-1]) # last index

# slice
# print(numbers[2: 5]) # start from index 2 and go to index 4
# print(numbers[2:]) # start from index 3 and go to end

# print(numbers[2:7:2]) # start from index 2 and go to index 6 and increment 2 every iteration

# print(numbers[3: -1]) # start from index 3 and go to index -1
# print(numbers[-1: 3: -1]) # numbers[ start: end : step]

# print(numbers[:])
# print(numbers[::-1])
# print(numbers[::-2])

numbers.append(10)
print(numbers[:])

numbers.insert(1, 100)
print(numbers[:])

numbers.remove(100)
print(numbers[:])

numbers.pop()  # without parameter last index value will be out and if index that value will be pop
# without parameter last index value will be out and if index that value will be pop
numbers.pop(1)
print(numbers[:])

res = numbers.count(4)
print(res)

numbers.reverse()
print(numbers[:])

numbers.sort()
print(numbers[:])

numbers.clear()
print(numbers[:])
