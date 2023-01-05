file = open('words.dat', 'w')
word = ''
while word != 'END':
    word = input('Enter a word (enter END to quit): ')
    if word != 'END' and word != '':
        file.write(word + '\n')
    if word == '':
        break
file.close()

file = open('words.dat', 'r')
data = file.readlines()
file.close()
for i, item in enumerate(data):
    currWord = item.replace('\n', '')
    print(f'{i+1} : {currWord}')
