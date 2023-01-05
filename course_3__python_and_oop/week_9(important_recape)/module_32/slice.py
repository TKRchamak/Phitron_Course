''' sequencial data type slicing (string, tuple, list)'''

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]

# slicing [start: end] ---->end-start element pabo
sliceData = lst[0:3]
sliceData = lst[:]  # puro array tai return korbe
# print(sliceData)

lst[0:3] = [0, 0, 0]  # change that range data by 0 without string and tuple
# print(lst)

lst[0:0:2]  # iterate accept one by one [start:end:step]
lst[::-1]  # reverse korar jonno

newSlice = slice(0, 4)
# print(lst[newSlice])
