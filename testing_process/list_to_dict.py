"""convert list to dict 

"""

my_list = ['@F1', 'OBCD', '!', '@F2', 'ADDAB', '!', '@F3', 'OKKA', '!', ]

my_dict = {}

for index, word in enumerate(my_list):
    if word[0] == '@':
        my_dict[word] = my_list[index+1]

print(my_dict)
