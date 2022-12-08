'''
    A B C
    A C B
    B A C
    B C A
    C A B
    C B A

'''

from itertools import permutations

list = [1, 2, 3]
word_list = ['tonmoy', 'kumar', 'roy']
for i in permutations(word_list):
    print(i)
