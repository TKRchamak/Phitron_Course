import numpy as np

oneD_array = np.array([1, 2, 3, 4, 5, 6])
twoD_array = np.array([[1, 2], [3, 4], [5, 6]])
threeD_array = np.array([
    [[1, 2], [3, 4], [5, 6]],
    [[1, 2], [3, 4], [5, 6]],
    [[1, 2], [3, 4], [5, 6]]
])

shaped = oneD_array.reshape(3, 2)
fliped = np.flip(shaped)
# print(fliped)
add_two_array = shaped + fliped
multi_two_array = shaped * fliped
back_to_one = add_two_array.flatten()
sum_back_to_one = add_two_array.flatten().sum()
# print(sum_back_to_one)

# dimension
dimension = threeD_array.ndim
num_of_elements = threeD_array.size
array_dimension_shape = threeD_array.shape
print(array_dimension_shape)


# type
data_type = back_to_one.dtype
# print(data_type)

diff_type = back_to_one.astype('f')
# print(diff_type)

sortData = np.sort(threeD_array)
# print(sortData)

copiedData = np.copy(threeD_array)
# print(copiedData)
