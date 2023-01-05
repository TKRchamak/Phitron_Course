given_set = [4, 5, 6]
# print(given_set[0:3])


# class py_solution:
#     def sub_sets(self, sset):
#         return self.subsetsRecur([], sorted(sset))

#     def subsetsRecur(self, current, sset):
#         if sset:
#             return self.subsetsRecur(current, sset[1:]) + self.subsetsRecur(current + [sset[0]], sset[1:])
#         return [current]


# print(py_solution().sub_sets([4, 5, 6, 8]))


def sub_sets(arr):
    result = [[], arr]
    for i in range(len(arr)):
        result.append([arr[i]])
        for j in range(i+1, len(arr)):
            result.append([arr[i], arr[j]])
    return result


if __name__ == "__main__":
    given_set = [4, 5, 6]
    print(sub_sets(given_set))
