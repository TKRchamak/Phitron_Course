

# for index, element in enumerate(numbers):
#     if index != (len(numbers)-1):
#         if (numbers[index] + numbers[index+1]) == target:
#             print(index+1, index+2)


class Array_pair_sum:
    def __init__(self, list, target):
        self.list = list,
        self.target = target

    def find_index(self):
        curr_list = list(self.list)[0]
        for index, element in enumerate(curr_list):
            if index != (len(curr_list)-1):
                if (curr_list[index] + curr_list[index+1]) == self.target:
                    print(index+1, index+2)


if __name__ == "__main__":
    numbers = [10, 20, 10, 40, 50, 60, 70]
    target = 50

    curr_arr = Array_pair_sum(numbers, target)
    curr_arr.find_index()
