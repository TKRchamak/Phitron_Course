numbers = [45, 12, 78, 95, 4, 68, 24, 35, 97]


def number_gen(nums):
    for num in nums:
        yield num


result_one_by_one = number_gen(numbers)
print(next(result_one_by_one))
